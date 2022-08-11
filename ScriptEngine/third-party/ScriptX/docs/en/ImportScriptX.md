# CMake project introduction guide

Usually, you need to include the ScriptX project into your project. You just need to put the ScriptX source code in your project,
then include the cmake file.

Before include, you also need to specify the real script engine (V8, JavaScriptCore, SpiderMonkey, Lua, etc.) used by the underlying layer.
Finally, you need to specify the include path of your script engine and properly configure the link information.

The ScriptX CMake file will eventually configure a `ScriptX` static library target.

> Note that the use of ScriptX requires at least the compiler to support C++17

The complete demo is as follows:

```cmake

# step 1
set(SCRIPTX_BACKEND V8)

# step 2
include(<path_to_ScriptX>/CMakeLists.txt)

# step 3
include_directories(<path_to_v8>/include)

# step 4
target_link_libraries(UnitTests gtest
        ScriptX # 4.1 link against ScriptX
        <path_to_v8>/libv8.a # 4.2 link against given engine backend
        )

```

After the configuration is complete, you can start using it.

# Include header file

All the contents of ScriptX are exposed through an aggregate header file `<ScriptX/ScriptX.h>`, 
users only need to include this header file to use it out of the box.