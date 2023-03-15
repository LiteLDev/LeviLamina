# Python Language

ScriptX and Python language type comparison table

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

## Language specific implementation of Object

Unlike JavaScript and Lua, Python has an internal generic object base class Py_Object that cannot be instantiated (equivalent to an abstract base class), so it is not possible to fully equate the Object concepts of these two languages to Python.

Python's Object is currently implemented using `Py_Dict`, which is analogous to Lua's table.It is normal to set & get member properties and methods using `set` and `get`, and call member methods . But you can't use `Object::newObject` to call its constructor to construct a new object of the same type -- because they're both of type dict, and there's no constructor

## `eval` return value problem

The Python API provides two types of interfaces for executing code: the `eval` type can only execute a single expression and return its result, while the `exec` type provides support for executing multiple lines of code, which is the normal way of reading a file to execute code, but the return value is always `None`. This is due to the special design of the Python interpreter, which differs significantly from other languages.

Therefore, in the ScriptX implementation, if you use `Engine::eval` to execute a multi-line statement, the return value of `eval` will always be `Null`. If you need to get the return value, you can add an assignment line at the end of the executed code, and then use `Engine::get` to get the data of the result variable from the engine after `eval` finished.

## The weak reference problem of some built-in types

In CPython's design, some types in Python do not support weak references, for the following reason: [Why can't subclasses of tuple and str support weak references in Python? - Stack Overflow](https:// stackoverflow.com/questions/60213902/why-cant-subclasses-of-tuple-and-str-support-weak-references-in-python). The affected scope includes built-in types such as `int`, `str`, `tuple`, and certain other custom types that do not support weak references.

The current solution for this case is to use a strong reference implementation inside `Weak<>` that points to elements that do not support weak references. Therefore, when using `Weak<>` pointing to objects of these types, it may not be able to do exactly what Weak references are supposed to do (e.g. prevent circular references, prevent resources from being occupied all the time without GC, etc.), so please pay attention to this.

If you have any better solutions, please feel free to tell us.

## GIL, multi-threading and sub-interpreters

In order to have multiple independent sub-engine environments in a single runtime environment, the sub-interpreter mechanism is used in the implementation to run each Engine's code separately in a mutually isolated environment to avoid conflicts. However, according to the official CPython documentation, the sub-interpreter mechanism may still have some imperfections, and some CPython extensions may have problems in the multi-interpreter environment, so you need to pay attention to it during development and use.

In addition, in the actual implementation, CPython's some bad design also brings problems, such as the widely known GIL: Global Interpreter Lock is created for thread safety. When multiple threads are running, GIL will be locked to ensure that only one thread is in a runnable state at the same time.

In order to satisfy the multi-engine work mechanism required by ScriptX without breaking the Python runtime environment, the state of the GIL is managed manually in implementation. When entering any `EngineScope`, GIL enters a locked state; after all EngineScopes exit, GIL is unlocked.

This shows that performance in a multi-threaded environment is still limited by the GIL, and only one thread can enter the `EngineScope` and enter the working state. the GIL problem has been the most serious problem limiting the performance of Python, and we hope that it can be gradually solved in future updates and improvements of CPython.

## Standard Libraries and Runtime Environment

Different from other types of engines, CPython uses an external stand-alone standard library. Therefore, when you use ScriptX to embed the Python interpreter into your application, you need to carry an additional copy of the Python runtime environment to ensure that Python will run properly.

Here is instructions of how to configure this runtime environment and set the parameters related to the runtime environment for the CPython engine.

### Download the CPython embedded runtime environment

1. Go to https://github.com/indygreg/python-build-standalone/releases and download the runtime environment from Release page, for the platform and architecture you intend to run on 
   - Windows x64 environment download: [cpython-3.10.9+20230116-x86_64-pc-windows-msvc-shared-install_only.tar.gz](https://github.com/indygreg/python- build-standalone/releases/download/20230116/cpython-3.10.9+20230116-x86_64-pc-windows-msvc-shared-install_only.tar.gz)
   - MacOS Arm64 environment download: [cpython-3.10.9+20230116-aarch64-apple-darwin-install_only.tar.gz](https://github.com/indygreg/python-build- standalone/releases/download/20230116/cpython-3.10.9+20230116-aarch64-apple-darwin-install_only.tar.gz)
   - Linux x64 environment download: [cpython-3.10.9+20230116-x86_64-unknown-linux-gnu-install_only.tar.gz](https://github.com/indygreg/python-build- standalone/releases/download/20230116/cpython-3.10.9+20230116-x86_64-unknown-linux-gnu-install_only.tar.gz)
   - For other platforms, find and download the runtime environment package for the corresponding platform
2. **If the above project fails**, you can also go and download the cpython-3.10.9.tar.gz stored in the ScriptX unit test project. This package is automatically pulled by ScriptX when running unit tests, and is exactly the same as the package downloaded in the above project.
   - Windows x64 environment download: https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/win64/embed-env
   - Linux x64 environment download: https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/linux64/embed-env
3. After downloading the package, extract the package and get a directory named `Python`
4. Rename this directory to `Python3` and move it into `your application directory/lib` directory.

When your application starts, it will automatically look for Python's standard libraries in this directory and load them. 

By the way, the embedded runtime environment has additional benefits: you can run `. /bin/python3 -m pip install xxx` to install custom pip packages in this embedded runtime environment. Installed packages can be imported and used directly in the ScriptX engine.

### Customizing CPython runtime settings

It's certainly not a good idea to fix the directory to `application directory/lib`. So a number of static methods are provided in PyEngine to read and modify some runtime settings, including the standard library search directory.

```c++
class PyEngine
{
	//...
    
	// Used to set the PythonHome path, i.e. the location of the CPython interpreter
    // On Linux platform, the default value is "./lib/python3/" 
    // On Windows platform, the default value is ".\\lib\\\python3\\"
    // You can change it as needed
    static void setPythonHomePath(const std::wstring &path);
    // Used to read the PythonHome path
    static std::wstring getPythonHomePath();
    // Used to set the module search paths, i.e. sys.path in Python, from which the target module will be searched when "import" is executed; Python standard libraries are also searched via these search paths
    // On Linux, the default value is {"./lib/Python3/lib/python3.10/"}
    // On Windows, the default value is {".\\lib\\\Python3\\\Lib\"}
    // You can modify it as needed, or add new search paths. Note that the standard library path must be included, otherwise ScriptX's Python interpreter will not start
    static void setModuleSearchPaths(const std::vector<std::wstring> &paths);
    // Used to add a new module search path to CPython runtime
    static void addModuleSearchPath(const std::wstring &path);
    // Used to read all module search paths
    static std::vector<std::wstring> getModuleSearchPaths();
    // Used to get the path separator symbol for the current platform; Linux is "/", Windows is "\"
    static std::wstring getPlatformPathSeparator();
    
    //...
}
```

These static functions can be called at any time to customize the settings of the Python runtime environment.
