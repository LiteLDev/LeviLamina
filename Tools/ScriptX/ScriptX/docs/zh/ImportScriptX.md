# CMake项目引入指引

通常，你需要include ScriptX项目到你的项目。你只需要要把ScriptX源码放到你的项目中，
然后CMake调用 include cmake文件。

在include之前，你还需要指定底层使用的真正的脚本引擎（V8，JavaScriptCore，SpiderMonkey, Lua等）。
最后，你需要指定你的脚本引擎的include路径，并妥善的配置好链接信息。

ScriptX的CMake文件最终会配置一个 `ScriptX` 静态库target。

> 注意使用ScriptX至少需要编译器支持C++17

完整demo如下:

```cmake

# step 1
set(SCRIPTX_BACKEND V8)

# step 2
include(<path_to_ScriptX>/CMakeLists.txt)

# step 3
include_directories(<path_to_v8>/include)

# step 4
target_link_libraries(UnitTests gtest
        ScriptX                 # 4.1 link against ScriptX
        <path_to_v8>/libv8.a    # 4.2 link against given engine backend
        )

```

配置完成之后就可以开始使用了。

# Include头文件

ScriptX的所有内容都通过一个聚合的头文件 `<ScriptX/ScriptXh.h>` 暴露出来，使用者只需include这个头文件即可开箱即用。