using System;
using System.Runtime.CompilerServices;

namespace IL2C.BasicTypes
{
    public sealed class Format3_CustomProducer
    {
        public override string ToString() => "STU";
    }

    [TestId("System_String")]
    [TestCase("A123BC124DE125F", "Format3", "A{0}BC{1}DE{2}F", (byte)123, (byte)124, (byte)125)]
    [TestCase("A-123BC-124DE-125F", "Format3", "A{0}BC{1}DE{2}F", (sbyte)-123, (sbyte)-124, (sbyte)-125)]
    [TestCase("A-12345BC-12346DE-12347F", "Format3", "A{0}BC{1}DE{2}F", (short)-12345, (short)-12346, (short)-12347)]
    [TestCase("A12345BC12346DE12347F", "Format3", "A{0}BC{1}DE{2}F", (ushort)12345, (ushort)12346, (ushort)12347)]
    [TestCase("A1234567BC1234568DE1234569F", "Format3", "A{0}BC{1}DE{2}F", 1234567, 1234568, 1234569)]
    [TestCase("A-1234567BC-1234568DE-1234569F", "Format3", "A{0}BC{1}DE{2}F", -1234567, -1234568, -1234569)]
    [TestCase("A1234567890123BC1234567890124DE1234567890125F", "Format3", "A{0}BC{1}DE{2}F", 1234567890123, 1234567890124, 1234567890125)]
    [TestCase("A-1234567890123BC-1234567890124DE-1234567890125F", "Format3", "A{0}BC{1}DE{2}F", -1234567890123, -1234567890124, -1234567890125)]
    [TestCase("A123.456BC123.457DE123.458F", "Format3", "A{0}BC{1}DE{2}F", 123.456f, 123.457f, 123.458f)]
    [TestCase("A123.456789BC123.456788DE123.456787F", "Format3", "A{0}BC{1}DE{2}F", 123.456789, 123.456788, 123.456787)]
    [TestCase("ATrueBCFalseDETrueF", "Format3", "A{0}BC{1}DE{2}F", true, false, true)]
    [TestCase("AXBCYDEZF", "Format3", "A{0}BC{1}DE{2}F", 'X', 'Y', 'Z')]
    [TestCase("AXYZBCPQRDESTUF", "Format3", "A{0}BC{1}DE{2}F", "XYZ", "PQR", "STU")]
    [TestCase("AXYZBCPQRDESTUF", "Format3_Custom", "A{0}BC{1}DE{2}F", IncludeTypes = new[] { typeof(Format1_CustomProducer), typeof(Format2_CustomProducer), typeof(Format3_CustomProducer) })]
    [TestCase("123A123B124C124D125E125", "Format3", "{0}A{0}B{1}C{1}D{2}E{2}", 123, 124, 125)]
    [TestCase("A125BC124DE123F", "Format3", "A{2}BC{1}DE{0}F", 123, 124, 125)]
    [TestCase("ABCDEF", "Format3", "ABCDEF", 123, 124, 125)]
    [TestCase("ABCDEF", "Format3", "A{0}BC{1}DE{2}F", "", "", "")]
    [TestCase("ABCDEF", "Format3", "A{0}BC{1}DE{2}F", null, null, null)]
    [TestCase(true, "Format3_Exception", "ABC{3}DEF", 123, 124, 125)]
    public sealed class System_String_Format3
    {
        public static string Format3(string format, object value0, object value1, object value2)
        {
            return string.Format(format, value0, value1, value2);
        }

        public static string Format3_Custom(string format)
        {
            var cp1 = new Format1_CustomProducer();
            var cp2 = new Format2_CustomProducer();
            var cp3 = new Format3_CustomProducer();
            return string.Format(format, cp1, cp2, cp3);
        }

        public static bool Format3_Exception(string format, object value0, object value1, object value2)
        {
            try
            {
                var s = string.Format(format, value0, value1, value2);
            }
            catch (FormatException)
            {
                return true;
            }
            return false;
        }
    }
}
