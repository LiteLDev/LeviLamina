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

Different from other engines, CPython uses stand-alone standard libraries. Therefore, when you use ScriptX to embed the Python interpreter into your application, you need to carry a Python standard library zip together with your application, to ensure that Python will start properly.

### Download the CPython standard library zip

1. Go to the ScriptX unit test project to download python310.zip.

   - Windows x64 environment download: https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/win64/embed-env

   - Linux x64 environment download: https://github.com/LiteLDev/ScriptXTestLibs/tree/main/python/linux64/embed-env

2. Simply place the zip package into the directory where your application is located.

When your application starts, it will automatically look for this Python standard library from the working directory and load it.

### Customizing the standard library zip

If you need to make the embedded Python engine work with some third-party Pip packages, you can modify the zip above as follows:

1. Extract `python310.zip`, you can see a site-packages directory inside
2. Install Python 3.10.9
3. Run `python3 -m pip install <package name> -t xxxx/site-packages` in the terminal, and install the packages you need into the extracted site-packages directory.
4. Repackage all the contents back as `python310.zip`, then put the zip package into the directory where your application is located.

Then you can import these third-party packages and use them in ScriptX's Python engines.

### Customizing CPython runtime settings

A number of static methods are provided in PyEngine to modify some settings, including the path to the standard library zip.

```c++
class PyEngine
{
	//...
    
	// Used to set the PythonHome path, which is the location of the CPython interpreter. There are some third-party packages that rely on this mechanism to work
    // On Linux platforms, the default value is "./", on Windows platforms, the default value is ".\\". This can be modified on demand
    static void setPythonHomePath(const std::wstring &path);
    // Used to read the PythonHome path
    static std::wstring getPythonHomePath();
    
    // Used to set the module search path from which the target module will be searched when import is executed. CPython also searches the standard library zip mentioned above via this search path.
    // On Linux platforms, the default value is {"./python310.zip"}, and on Windows platforms, the default value is {".\\python310.zip"}
    // You can change it as needed, or add new search paths. Note that the standard library zip must be included, otherwise the Python interpreter will not start
    static void setModuleSearchPaths(const std::vector<std::wstring> &paths);
    // Used to add a new module search path to the CPython engine
    static void addModuleSearchPath(const std::wstring &path);
    // Used to read all module search paths
    static std::vector<std::wstring> getModuleSearchPaths();
    
    // Used to get the path separator symbol for the current platform; Linux is "/", Windows is "\\"
    static std::wstring getPlatformPathSeparator();
    
    //...
}
```

For example, if you want to change the path of the standard library zip to `". /lib/python310.zip"`, you can write the following code.

```C++
PyEngine::setModuleSearchPaths( {"./lib/python310.zip"} );
```
