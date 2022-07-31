# Quick experience

In order to quickly experience ScriptX, here are the main steps to run a single test.

Because UnitTest requires a specific V8/JavaScriptCore/Lua library, I have compiled the mac and windows platform by myself, and configured the CMake file for single test and then automatically download it when compiling.

If you use CLion, it is the easiest, just open `test/CMakeLists.txt` directly.
**Note that it is the cmake in the test directory, not the root directory**

VisualStudio can also directly open the cmake project, ibid.
Or you can use cmake to generate a VS project:
```bash
mkdir project
cd project
cmake -G "Visual Studio 15 2017 Win64" path/to/ScriptX/test

# 32 bit
# cmake -G "Visual Studio 15 2017"
```

To use XCode, you need to use cmake to generate an Xcode project:

```bash
mkdir project
cd project
cmake -G Xcode path/to/ScriptX/test
```

Then run the UnitTests target.

It should be noted that the JavaScriptCore of the windows platform only has a 32-bit library.

Finally, you need to choose different backends through the CMake command line or modify the `test/cmake/TestEnv.cmake` file.

### Use Demo

The unit test itself can be used as an example of the use of various APIs.

At the same time, the author also provides a most simplified Demo, `test/src/Demo.cc`

The Demo simulates the mini game environment:

1. The small game engine injects host capabilities into JS
2. Mini game engine injected into the basic library
3. Execute the game script