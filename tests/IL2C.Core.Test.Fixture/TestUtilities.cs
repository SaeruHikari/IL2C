﻿using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Text;
using System.Threading.Tasks;

namespace IL2C
{
    internal static class TestUtilities
    {
        #region Test case related
        private static object ConvertToArgumentType(object value, Type argumentType)
        {
            // This is helper function that convert between raw value type and argument type.
            // Because .NET attribute can't have complex type arguments.
            if (value == null)
            {
                return null;
            }
            else if (value.GetType() == argumentType)
            {
                return value;
            }
            else if (argumentType == typeof(IntPtr))
            {
                if (value is int)
                {
                    return new IntPtr((int)value);
                }
                else if (value is long)
                {
                    return new IntPtr((long)value);
                }
                else
                {
                    throw new InvalidCastException();
                }
            }
            else if (argumentType == typeof(UIntPtr))
            {
                if (value is uint)
                {
                    return new UIntPtr((uint)value);
                }
                else if (value is ulong)
                {
                    return new UIntPtr((ulong)value);
                }
                else
                {
                    throw new InvalidCastException();
                }
            }
            else
            {
                return Convert.ChangeType(value, argumentType);
            }
        }

        public static TestCaseInformation CreateTestCaseInformation(
            string categoryName, string id, string name,
            MethodInfo method, MethodBase[] additionalMethods, TestCaseAttribute caseAttribute) =>
            new TestCaseInformation(
                categoryName,
                id,
                name,
                ConvertToArgumentType(caseAttribute.Expected, method.ReturnType),
                caseAttribute.Assert,
                method,
                (caseAttribute.IncludeBaseTypes ?
                    method.DeclaringType.BaseType.Traverse(type => type.BaseType).Concat(caseAttribute.IncludeTypes) :
                    caseAttribute.IncludeTypes).
                    ToArray(),
                additionalMethods,
                caseAttribute.Arguments.
                    Zip(method.GetParameters().Select(p => p.ParameterType), (arg, type) => ConvertToArgumentType(arg, type)).
                    ToArray());

        private static IEnumerable<Type> TraverseTypes<T>(bool includeBaseTypes, Type[] includeTypes)
        {
            return includeBaseTypes ?
                typeof(T).Traverse(type => type.BaseType).Concat(includeTypes) :
                new[] { typeof(T) }.Concat(includeTypes);
        }

        public static TestCaseInformation[] GetTestCaseInformations<T>()
        {
            var categoryName = typeof(T).
                Namespace.Split('.').Last();
            var id = typeof(T).
                GetCustomAttribute<TestIdAttribute>()?.Id ??
                typeof(T).Name;

            var caseInfos =
                (from testCase in typeof(T).GetCustomAttributes<TestCaseAttribute>(true)
                 let method = typeof(T).GetMethod(
                     testCase.MethodName,
                     BindingFlags.Public | BindingFlags.Static | BindingFlags.DeclaredOnly)    // Static method only for test entry
                 where method != null
                 let additionalMethods =
                    testCase.AdditionalMethodNames.
                    SelectMany(methodName =>
                        TraverseTypes<T>(testCase.IncludeBaseTypes, testCase.IncludeTypes).
                        SelectMany(type => type.GetMethods(
                            BindingFlags.Public | BindingFlags.NonPublic |
                            BindingFlags.Static | BindingFlags.Instance | BindingFlags.DeclaredOnly).  // Both instance or static method
                        Where(m => m.Name == methodName))).
                    ToArray()
                 let totalAdditionalMethods =
                    // If contains instance method in set of additional methods (test case is implicitly required the instance), add the constructor.
                    (additionalMethods.Any(m => !m.IsStatic) ?
                        new[] { (MethodBase)typeof(T).GetConstructor(Type.EmptyTypes) } :
                        new MethodBase[0]).
                    Concat(additionalMethods).
                    ToArray()
                 group new { testCase, method, AdditionalMethods = totalAdditionalMethods } by method.Name).
                 SelectMany(g =>
                 {
                     var a = g.ToArray();
                     return (a.Length == 1) ?
                        a.Select(entry => CreateTestCaseInformation(categoryName, id, entry.method.Name, entry.method, entry.AdditionalMethods, entry.testCase)) :
                        a.Select((entry, index) => CreateTestCaseInformation(categoryName, id, entry.method.Name + "_" + index, entry.method, entry.AdditionalMethods, entry.testCase));
                 }).
                 OrderBy(caseInfo => caseInfo.Name).
                 ToArray();
            return caseInfos;
        }
        #endregion

        #region IO related
        private static bool IsStrangeProblemException(Exception ex)
        {
            return
                ex.Message.Contains("not a valid application") ||
                ex.Message.Contains("it is being used by another process") ||
                ex.Message.Contains("system cannot find the file specified") ||
                ex.Message.Contains("file or directory is corrupted and unreadable") ||
                ex.Message.Contains("Permission denied") ||
                ex.Message.Contains("ExitCode=-1073741819");
        }

        // HACK: If use offloading Task rarely causes strange problems, it's workaround by retry. ¯\_(ツ)_/¯
        public static async Task<T> RetryIfStrangeProblemAsync<T>(Func<T> func, int count = 16)
        {
            while (true)
            {
                try
                {
                    return func();
                }
                catch (Exception ex)
                {
                    if (!IsStrangeProblemException(ex))
                    {
                        throw;
                    }
                    if (count-- == 0)
                    {
                        throw;
                    }
                }
                await Task.Delay(100);
            }
        }

        // HACK: If use offloading Task rarely causes strange problems, it's workaround by retry. ¯\_(ツ)_/¯
        public static async Task<T> RetryIfStrangeProblemAsync<T>(Func<Task<T>> func, int count = 16)
        {
            while (true)
            {
                try
                {
                    return await func();
                }
                catch (Exception ex)
                {
                    if (!IsStrangeProblemException(ex))
                    {
                        throw;
                    }
                    if (count-- == 0)
                    {
                        throw;
                    }
                }
                await Task.Delay(100);
            }
        }

        public static Task<Stream> CreateStreamAsync(string path)
        {
            return RetryIfStrangeProblemAsync(() =>
            {
                var basePath = Path.GetDirectoryName(path);
                while (!Directory.Exists(basePath))
                {
                    try
                    {
                        Directory.CreateDirectory(basePath);
                    }
                    catch
                    {
                    }
                }
                return (Stream)new FileStream(path, FileMode.Create, FileAccess.ReadWrite, FileShare.None, 65536, true);
            });
        }

        public static async Task WriteTextFileAsync(
            TextWriter tw, TextReader from, IReadOnlyDictionary<string, object> replaceValues)
        {
            while (true)
            {
                var line = await from.ReadLineAsync();
                if (line == null)
                {
                    break;
                }

                if (replaceValues.Count >= 1)
                {
                    var sb = new StringBuilder(line);
                    foreach (var entry in replaceValues)
                    {
                        sb.Replace("{" + entry.Key + "}", entry.Value.ToString());
                    }
                    await tw.WriteLineAsync(sb.ToString());
                }
                else
                {
                    await tw.WriteLineAsync(line);
                }
            }

            await tw.FlushAsync();
        }

        public static async Task WriteTextFileAsync(
            string path, TextReader tr, IReadOnlyDictionary<string, object> replaceValues)
        {
            using (var fs = await CreateStreamAsync(path))
            {
                var tw = new StreamWriter(fs);
                await WriteTextFileAsync(tw, tr, replaceValues);
                fs.Close();
            }
        }

        public static Task WriteTextFileAsync(
            string path, string text, IReadOnlyDictionary<string, object> replaceValues)
        {
            return WriteTextFileAsync(path, new StringReader(text), replaceValues);
        }

        private static readonly Dictionary<string, object> empty = new Dictionary<string, object>();

        public static Task WriteTextFileAsync(
            string path, TextReader tr)
        {
            return WriteTextFileAsync(path, tr, empty);
        }

        public static Task WriteTextFileAsync(
            string path, string text)
        {
            return WriteTextFileAsync(path, text, empty);
        }

        public static async Task CopyResourceToStreamAsync(Stream targetStream, string resourceName)
        {
            using (var ts = typeof(TestFramework).Assembly.GetManifestResourceStream(
                "IL2C.Templates." + resourceName))
            {
                await ts.CopyToAsync(targetStream);
                await targetStream.FlushAsync();
            }
        }

        public static async Task CopyResourceToTextFileAsync(
            string path, string resourceName, IReadOnlyDictionary<string, object> replaceValues)
        {
            using (var ts = typeof(TestFramework).Assembly.GetManifestResourceStream(
                "IL2C.Templates." + resourceName))
            {
                var tr = new StreamReader(ts);
                await WriteTextFileAsync(path, tr);
            }
        }

        public static Task CopyResourceToTextFileAsync(
            string path, string resourceName)
        {
            return CopyResourceToTextFileAsync(path, resourceName, empty);
        }
        #endregion

        public static string GetCLanguageTypeName(Type type)
        {
            if (type.IsByRef || type.IsPointer)
            {
                return string.Format(
                    "{0}*",
                    GetCLanguageTypeName(type.GetElementType()));
            }

            string typeName = null;
            if (type == typeof(bool))
            {
                typeName = "bool";
            }
            else if (type == typeof(byte))
            {
                typeName = "uint8_t";
            }
            else if (type == typeof(sbyte))
            {
                typeName = "int8_t";
            }
            else if (type == typeof(short))
            {
                typeName = "int16_t";
            }
            else if (type == typeof(ushort))
            {
                typeName = "uint16_t";
            }
            else if (type == typeof(int))
            {
                typeName = "int32_t";
            }
            else if (type == typeof(uint))
            {
                typeName = "uint32_t";
            }
            else if (type == typeof(long))
            {
                typeName = "int64_t";
            }
            else if (type == typeof(ulong))
            {
                typeName = "uint64_t";
            }
            else if (type == typeof(IntPtr))
            {
                typeName = "intptr_t";
            }
            else if (type == typeof(UIntPtr))
            {
                typeName = "uintptr_t";
            }
            else if (type == typeof(float))
            {
                typeName = "float";
            }
            else if (type == typeof(double))
            {
                typeName = "double";
            }
            else if (type == typeof(char))
            {
                typeName = "wchar_t";
            }
            else if (type == typeof(string))
            {
                typeName = "wchar_t*";
            }
            else if (type == typeof(void))
            {
                typeName = "void";
            }
            else
            {
                typeName = Utilities.ToMangledName(type.FullName);
                if (!type.IsValueType)
                {
                    typeName += "*";
                }
            }

            Debug.Assert(typeName != null);

            return typeName;
        }
    }
}
