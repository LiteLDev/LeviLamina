### 1. 使用JavaScriptCore的时候出现JSCore内部的crash
这个和JSCore的实现有关，之前遇到过其他地方的内存越界问题导致JSCore内部出现crash。建议打开ASAN跑一下整个app先排查掉已有的内存问题。


### 2. 我们项目编译器略老，不支持C++17
ScriptX对C++的STL大部分API只需要11就可以支持，只用到C++17的一些语言特性和部分模板。只要你的编译器能够完整支持C++11，并支持C++1z（C++17的试验版本）就能正常使用。
小游戏项目使用的NDK r16b版本，可谓非常古老，但是使用 C++1z 来编译没有任何问题。

### 3. 我们的项目不推荐使用C++异常机制
ScriptX合理利用C++异常机制，方便错误的统一处理；并且从实践上来说对于处理因为脚本异常引起的Crash非常有效。
ScriptX建议的异常处理方式是在EngineScope里面紧跟一层try-catch，捕获script::Exception并做明确处理；不建议把异常透传到外部。
因此针对不推荐使用C++异常的项目，可以把脚本部分放到独立模块，仅对该模块启动异常功能，并保证异常不会传到外部。

附上一些上述的设置方法：

**CMake**

```cmake
# 使用include而不是add_subdirectory
# 这样才能继续配置ScriptX target
include(ScriptX/CMakeLists.txt)
...

# 给 ScriptX 关掉 rtti
target_compile_options(ScriptX PRIVATE -fno-rtti)

# 给 目标工程关掉 rtti和异常
target_compile_options(UnitTests PRIVATE -fno-rtti -fno-exception)

# 目标工程中使用到ScriptX的cpp需要单独打开异常
set_source_files_properties(
   project_file/script_runtime.cc
   project_file/script_util.cc
   project_file/script_bridge.cc
PROPERTIES COMPILE_FLAGS "-fexception")
```

**Xcode**
[Specific compiler flags for specific files in Xcode](https://stackoverflow.com/questions/2764735/specific-compiler-flags-for-specific-files-in-xcode)

### 4. 其他问题

如有其它问题也请到issue提问，或者搜索已有issue。

