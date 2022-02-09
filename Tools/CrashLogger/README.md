# CrashLogger
> A dll injected into process to dump stack when crashing.

Support me at [https://www.minebbs.com/resources/crashlogger-pro.2645/](https://www.minebbs.com/resources/crashlogger-pro.2645/)


### At Crash
- Result of stack walk will output both at console and file  `.\logs\Crash\TrackBack_xxxxxxxx_xx-xx-xx.log`
- Dumpbin database will generate at file `.\logs\Crash\CrashDump_xxxxxxxx_xx-xx-xx.dmp`  

![image-20210716124312591](asserts/image-20210716124312591.png)
- Stack walk can give you a general view of possible problems.

Using CrashDump, Dump files and WinDbg or Visual Studio, you can get more infomation about the crash.