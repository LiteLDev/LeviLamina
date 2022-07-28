### 1. Internal crashes inside JavaScriptCore
This is related to the implementation of JSCore. I have encountered memory out-of-bounds problems in other places before causing crashes in JSCore. It is recommended to open ASAN and run the entire app first to troubleshoot existing memory problems.


### 2. Our project compiler is slightly old and does not support C++17
ScriptX supports most of the STL APIs of C++ with only 11. It only uses some of the language features and some templates of C++17. As long as your compiler can fully support C++11 and C++1z (the experimental version of C++17), it can be used normally.
The NDK r16b version used by the our project is very old, but there is no problem with using C++1z to compile.

### 3. Our project does not recommend the use of C++ exception mechanism
ScriptX makes reasonable use of the C++ exception mechanism to facilitate the unified handling of errors; and in practice, it is very effective for handling Crash caused by script exceptions.
The exception handling method suggested by ScriptX is to follow a layer of try-catch in EngineScope, capture script::Exception and deal with it explicitly; it is not recommended to pass the exception to the outside.
Therefore, for projects where C++ exceptions are not recommended, you can put the script part in a separate module, and only enable the exception feature for this module, and ensure that the exception will not be transmitted to the outside.

Attach some of the above setting methods:

**CMake**

```cmake

# use include instead of add_subdirectory so you can
# config the ScriptX target
include(ScriptX/CMakeLists.txt)
...

# Turn off rtti for ScriptX
target_compile_options(ScriptX PRIVATE -fno-rtti)

# Turn off rtti and exceptions for the target project
target_compile_options(UnitTests PRIVATE -fno-rtti -fno-exception)

# The cpp of ScriptX used in the target project needs to be opened separately
set_source_files_properties(
   project_file/script_runtime.cc
   project_file/script_util.cc
   project_file/script_bridge.cc
PROPERTIES COMPILE_FLAGS "-fexception")
```

**Xcode**
[Specific compiler flags for specific files in Xcode](https://stackoverflow.com/questions/2764735/specific-compiler-flags-for-specific-files-in-xcode)

### 4. Other issues

If you have any other questions, please go to issue to ask questions, or search for existing issues.