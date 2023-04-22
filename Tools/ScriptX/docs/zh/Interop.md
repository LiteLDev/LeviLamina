# 和原生引擎API互操作

ScriptX提供一些基础的接口，以便和原生引擎API互相操作。
这些基础接口以辅助类的形式出现。

比如:
1. `V8` -> `script::v8_interop`
1. `JavaScriptCore` -> `script::jsc_interop`
1. `Lua` -> `script::lua_interop`
1. `Python` -> `script::py_interop`

主要提供能力：
1. 从引擎指针获取内部原生引擎实例
2. `script::Local`引用和原生引用类型的转换
3. `script::Arguments`和原生调用参数的转换

这几个 `xx_interop` 辅助类只有在编译时选择对应backend才会出现，因此调用相关API时需要用宏隔离。

详见 [InteroperateTest](../../test/src/InteroperateTest.cc)

ScriptX把自己定位为一个帮手，帮助你来调用原生引擎API，但是当帮手不得力(有能力没暴露)的时候随时可以自己上！
