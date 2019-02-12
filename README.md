# IL2C - A translator for ECMA-335 CIL/MSIL to C language.

## Status

|Provider|Branch|Build|
|:--|:--|:--|
|AppVeyor|master|[![AppVeyor (.NET 4.5 / .NET Core 2.0)](https://ci.appveyor.com/api/projects/status/bwqk4p8x05vckl0x/branch/master?svg=true)](https://ci.appveyor.com/project/kekyo/il2c/branch/master) [![AppVeyor tests](https://img.shields.io/appveyor/tests/kekyo/il2c/master.svg)](https://ci.appveyor.com/project/kekyo/il2c/branch/master/tests)<br>![Build Stats](https://buildstats.info/appveyor/chart/kekyo/il2c?branch=master&includeBuildsFromPullRequest=false)|
|AppVeyor|devel|[![AppVeyor (.NET 4.5 / .NET Core 2.0)](https://ci.appveyor.com/api/projects/status/bwqk4p8x05vckl0x/branch/devel?svg=true)](https://ci.appveyor.com/project/kekyo/il2c/branch/devel) [![AppVeyor tests](https://img.shields.io/appveyor/tests/kekyo/il2c/devel.svg)](https://ci.appveyor.com/project/kekyo/il2c/branch/devel/tests)<br>![Build Stats](https://buildstats.info/appveyor/chart/kekyo/il2c?branch=devel&includeBuildsFromPullRequest=false)|

| NuGet | Current |
|:---|:---|
| IL2C.Interop | [![NuGet IL2C.Interop](https://img.shields.io/nuget/v/IL2C.Interop.svg?style=flat)](https://www.nuget.org/packages/IL2C.Interop) 
| IL2C.Core | [![NuGet IL2C.Core](https://img.shields.io/nuget/v/IL2C.Core.svg?style=flat)](https://www.nuget.org/packages/IL2C.Core) 
| IL2C.Build | [![NuGet IL2C.Build](https://img.shields.io/nuget/v/IL2C.Build.svg?style=flat)](https://www.nuget.org/packages/IL2C.Build) 

## What's this?

* IL2C is a translator (transpiler) of ECMA-335 CIL/MSIL to C language.

* We're aiming for:
  * **Better predictability of runtime costs**  
  Better human readability of C source code translated by IL2C.
  * **Very tiny footprint requirements**  
  We are thinking about how to fit from large system with many resources to tiny embedded system.
  * **Better code/runtime portability**  
  Minimum requirement is only C99 compiler.
  * **Better interoperabilities for existed C libraries**  
  You can use the standard .NET interop technics (like P/Invoke.)
  * **Containing seamless building systems for major C toolkits**  
  for example: CMake system, Arduino IDE, VC++ ...

## Simple hello-world like code

Original C# source code:

```csharp
public static class HelloWorld
{
    public static void Main()
    {
        Console.WriteLine("Hello world with IL2C!");
    }
}
```

Translated to C source code (all comments are stripped):

```c
IL2C_CONST_STRING(string0__, L"Hello world with IL2C!");

void HelloWorld_Main()
{
    struct
    {
        const IL2C_EXECUTION_FRAME* pNext__;
        const uint16_t objRefCount__;
        const uint16_t valueCount__;
        System_String* stack0_0__;
    } frame__ = { NULL, 1, 0 };
    il2c_link_execution_frame(&frame__);

    frame__.stack0_0__ = string0__;
    System_Console_WriteLine_10(frame__.stack0_0__);
    il2c_unlink_execution_frame(&frame__);
    return;
}
```

[View with comments / other sample translation results (contain complex results)](docs/sample-translation-results.md)

## Getting started

We have a only simple [Getting started document.](docs/getting-started.md)

And also you can read a blog post: ["Try writing code using both the Azure Sphere Development Kit and C#" (My blog)](https://www.kekyo.net/2019/01/04/6917).

### IL2C core hacking

IL2C current status is **experimental**, summarized lazy steps:

1. Open il2c.sln by Visual Studio 2017. Your environment requires enabling C#, VC++ and NUnit3 vsix addin.
2. Build with "Debug - AnyCPU" configuration.
3. If this don't show any errors, kick starts unit tests at the Test Explorer (Run All).
4. The unit tests need a long time for the first execution. It's because these tests automatically download mingw platform and run on it.
5. After all tests passed, you are ready to hack!

Note:

* Essentially, the unit tests compare and verify results executed on .NET CLR with results executed by the native code gcc compiled.
* You can see ["tests/IL2C.Core.Test.Target project"](https://github.com/kekyo/IL2C/tree/master/tests/IL2C.Core.Test.Target). The translated code:  ["tests/IL2C.Core.Test.Fixture project"](https://github.com/kekyo/IL2C/tree/master/tests/IL2C.Core.Test.Fixture) of subfolder "bin/Debug/net462."
* About the CI engineering, you can get more information: ["appveyor.yml"](appveyor.yml) file.
* Currently IL2C contains the VC++ project file because it's better for debugging mates. You don't need this because "IL2C.Runtime.vcxproj" project file DOESN'T REQUIRE for any building (manually and CI buildings.)
* If you want to see internal IL2C, I think these slides help you: [Making archive IL2C #6-55: dotNET 600 2018 session slide](https://www.slideshare.net/kekyo/making-archive-il2c-655-dotnet600-2018)

## Overall status

### Following lists are auto-generated by unit test.

* [Supported IL opcodes list](docs/supported-opcodes.md)

* [Supported basic types](docs/supported-basic-types.md)

* [Supported runtime system features](docs/supported-runtime-system-features.md)

* [Supported features (old)](docs/supported-features.md)

## License

Under Apache v2.

## Related information

* Slide: [Making archive IL2C](https://www.slideshare.net/kekyo/making-archive-il2c-655-dotnet600-2018)

  * **Covers overall information about internal IL2C.**
  * #6-52 session in [dotNET 600 2018](https://centerclr.connpass.com/event/101479/) conference.

* Slide: [Write common, run anywhere](https://www.slideshare.net/kekyo/write-common-run-anywhere)
  * #6-51 session in [dotNET 600 2017](https://centerclr.connpass.com/event/71414/)
 conference
  * [Session video (Japanese)](http://bit.ly/2DiaoKZ)
  
* Polish notation calculator:  [Minimum, but useful impls for "Win32", "UEFI" and "M5Stack(ESP32)"](samples/Calculator)
  ![Calculator.M5Stack](images/Calculator.M5Stack.jpg)

* Slide: [How to make the calculator / Making archive IL2C](https://www.slideshare.net/kekyo/how-to-make-the-calculator)
  * #6-52 session in [.NET Fringe Japan 2018](https://dotnetfringe-japan.connpass.com/event/74536/)

* Slide: [Making archive IL2C](https://www.slideshare.net/kekyo/mvp-summit-f-meetup-making-archive-il2c-653)
  * #6-53 session in [MVP Summit F# Meetup / SEATTLE F# USERS GROUP](https://www.meetup.com/en-US/FSharpSeattle/events/247905452/)

* Slide: [Making archive IL2C](https://www.slideshare.net/kekyo/making-archive-il2c-654-at-mvp-summit-2018-vs-hackathon)
  * #6-54 session in [Microsoft MVP Global Summit 2018](https://mvp.microsoft.com/en-us/Summit/Agenda)
 – VS HACKATHON"

* Session video (Japanese): ["Making archive IL2C play list"](http://bit.ly/2xtu4MH)
  * "How to create IL2C or a tool similar to IL2CPP? You see just the pure design process includes the concept."
  * #1 session in [Center CLR #6](https://centerclr.connpass.com/)

* Video letter (Japanese): [Tested IL2C on micro:bit and arduino platform](http://bit.ly/2xGFo9J)
  ![Tested IL2C on micro:bit and arduino platform #8](images/microbit.jpg)

* Session video (Japanese): [Making archive IL2C](http://bit.ly/2hI1jTb)
  * #6-28 session in [.NET Conf 2017 in Tokyo Room B](https://csugjp.connpass.com/event/66004/)

* Milestone 2+ informations (Japanese): [Extensive Xamarin - Xamaritans](http://bit.ly/2ycNVzW)
  * included in the booklet "Extensive Xamarin - Techbook Fest part 3"

## Photos of design process

* #6-6: Near milestones

  ![#6-6: Near milestones](images/IMG_20170917_194810.jpg)

* #6-14: Data flow analysis

  ![#6-14: Data flow analysis](images/IMG_20170926_225355.jpg)

* Milestone 1: Test on VC++ and check how C compiler's optimizer works.

  ![Milestone 1: Test on VC++ and check how C compiler's optimizer works](images/il2c1.png)

* #6-48: How mark-and-sweep garbage collection works on a translated code.

  ![#6-48: How mark-and-sweep garbage collection works on a translated code](images/IMG_20171130_200549.jpg)

* How overload/override/virtual method symbol calculus work.

  ![How overload/override/virtual method symbol calculus work](images/IMG_20181028_165314.jpg)
  
* How to translate exception handlers when combined the local unwind and global unwind.
  * We are thinking about at [Center CLR Try! development meetup (11/10/2018, Japanese)](https://centerclr.connpass.com/event/107981/)

  ![How to translate exception handlers when combined the local unwind and global unwind](images/IMG_20181110_181756.jpg)
    
* This is the strcuture graph for the exection-frame and exception-frame.

  ![This is the strcuture graph for the exection-frame and exception-frame](images/IMG_20181112_120412.jpg)
