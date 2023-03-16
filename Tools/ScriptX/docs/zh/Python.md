# Python语言

ScriptX和Python语言类型对照表

|   Python   |  ScriptX   |
| :--------: | :--------: |
|    None    |    Null    |
|    dict    |   Object   |
|    list    |   Array    |
|   string   |   String   |
| int, float |   Number   |
|    bool    |  Boolean   |
|  function  |  Function  |
| bytearray  | ByteBuffer |

## Object 的语言特定实现

和 JavaScript 与 Lua 不同，Python 在内部通用的对象基类 Py_Object 无法被实例化（相当于抽象基类），因此无法将这两种语言中的 Object 概念完全等同到 Python 中。

目前 Python 的 Object 使用 `Py_Dict` 实现，类比于 Lua 的 table，同样可以使用 `set` `get` 设置成员属性和方法，并调用成员方法。但是无法使用 `Object::newObject` 调用其构造函数构造一个同类型的新对象 —— 因为它们的类型都是 dict，不存在构造函数

## `eval` 返回值问题

Python API 提供的执行代码接口分为两种：其中 eval 类型的接口只能执行单个表达式，并返回其结果；exec 类型的接口对执行多行代码提供支持（也就是正常读取文件执行代码所采取的方式），但是返回值恒定为`None`。这是由于 Python 解释器特殊的设计造成，与其他语言有较大差异。

因此，在ScriptX的实现中，如果使用 `Engine::eval`执行多行语句，则 `eval` 返回值一定为 `Null`。如果需要获取返回值，可以在所执行的代码最后添加一行赋值，并在 `eval` 执行完毕后使用 `Engine::get` 从引擎获取结果变量的数据。

## 部分内置类型的弱引用问题

在CPython的设计中，Python的部分类型并不支持弱引用，具体原因可见：[Why can't subclasses of tuple and str support weak references in Python? - Stack Overflow](https://stackoverflow.com/questions/60213902/why-cant-subclasses-of-tuple-and-str-support-weak-references-in-python)。受影响的范围包括`int`, `str`, `tuple`等内置类型，以及其他某些不支持弱引用的自定义类型。

对于这种情况，目前的解决方案是：指向不支持弱引用的元素的`Weak<>`内部使用强引用实现。因此在使用指向这些类型的对象的`Weak<>`时，可能无法完全起到Weak引用应有的作用（如防止循环引用、防止资源被占无法GC等），请各位开发者留意。如果有什么更好的解决方案欢迎提出。

## GIL，多线程和子解释器

为了实现在单个运行时环境中拥有多个独立的子引擎环境，在实现中使用了子解释器机制，在互相隔离的环境下分别运行每个Engine的代码以避免冲突。不过根据CPython官方文档，子解释器机制可能仍然存在一些不完善的地方，有部分CPython扩展可能在多解释器环境中出现问题，在开发和使用过程中需要注意留心。

另外，在实际实现中，CPython存在的一些不好的设计也带来了问题，比如广为人知的GIL：为了线程安全而设立的全局解释器锁GIL，在多个线程同时运行时会进行加锁，保证同一时间只有一个线程处于可运行状态。

为了满足ScriptX所要求的多引擎工作机制，同时不破坏Python运行环境，在实际代码编写中对GIL的状态进行了手动管理。当进入任何`EngineScope`下时，GIL进入锁定状态；所有EngineScope都退出后，GIL解锁。

由此可见，在多线程环境下性能仍然受制于GIL，同时只能有一个线程可以进入`EngineScope`并进入工作状态。GIL问题一直是制约Python性能提高的最严重的问题，希望在后续CPython的更新和改进中可以逐步得到解决。

## 标准库与运行时环境

和其他的引擎略有不同的是，CPython使用了外置的标准库。因此，当你使用ScriptX嵌入Python解释器到你的应用程序时，除了动态链接库之外，还需要额外再携带一份Python标准库的压缩包，以保证Python可以正常启动。

### 下载CPython标准库压缩包

1. 前往ScriptX单元测试项目下载python310.zip：

   - Windows x64环境下载：https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/win64/embed-env

   - Linux x64环境下载：https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/linux64/embed-env

2. 将压缩包放置到你应用程序所在目录即可。

在你的应用程序启动时，将自动从工作目录下寻找这个Python标准库并加载。

### 自定义标准库压缩包

如果你需要让嵌入解释器可以使用一些第三方的Pip包，可以按如下方法修改上面的压缩包：

1. 将下载到的`python310.zip`解压，可以看到里面有个site-packages目录
2. 安装 CPython 3.10.9
3. 在终端执行`python3 -m pip install <包名> -t xxxx/site-packages`，将你需要的包安装到解压出来的site-packages目录中
4. 将解压出的全部内容重新打包为`python310.zip`，将压缩包放到你应用程序所在目录即可。

这样，在ScriptX的Python解释器中就可以import这些第三方的包并进行使用。

### 自定义CPython运行时设置

在PyEngine中提供了一系列静态方法，可以对标准库压缩包路径在内的部分设置进行修改：

```c++
class PyEngine
{
	//...
    
	// 用于设置PythonHome路径，即CPython解释器所在位置。有部分第三方包依赖此机制工作
    // 在Linux平台上，默认值为 "./"，在Windows平台上，默认值为 ".\\"。可以按需修改
    static void setPythonHomePath(const std::wstring &path);
    // 用于读取PythonHome路径
    static std::wstring getPythonHomePath();
    
    // 用于设置模块搜索路径，执行import时将从这些目录（或压缩包）中搜索目标模块。CPython也通过此搜索路径搜索上面提到的标准库压缩包。
    // 在Linux平台上，默认值为 {"./python310.zip"}，在Windows平台上，默认值为 {".\\python310.zip"}
    // 可以按需修改，或添加新的搜索路径。注意标准库压缩包必须包括在内，否则Python解释器将无法启动
    static void setModuleSearchPaths(const std::vector<std::wstring> &paths);
    // 用于添加一条新的模块搜索路径到CPython引擎中
    static void addModuleSearchPath(const std::wstring &path);
    // 用于读取所有的模块搜索路径
    static std::vector<std::wstring> getModuleSearchPaths();
    
    // 用于获取当前平台的路径分隔符符号。Linux平台为"/"，Windows平台为"\\"
    static std::wstring getPlatformPathSeparator();
    
    //...
}
```

比如，你想把标准库压缩包路径修改为`"./lib/python310.zip"`，可以编写如下代码：

```C++
PyEngine::setModuleSearchPaths( {"./lib/python310.zip"} );
```

