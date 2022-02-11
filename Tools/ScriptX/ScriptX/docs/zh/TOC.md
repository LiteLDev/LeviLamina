# 上手文档

ScriptX 中的一些重要类：
1. `ScriptEngine`
2. `EngineScope`
2. `Exception`
3. `Value`, `Null`, `Object`, `String`, `Number`, `Boolean`, `Function`, `Array`, `ByteBuffer`, `Unsupported`
4. `Local<Value>`, `Local<Null>`, `Local<Object>`, `Local<String>`, `Local<Number>`, `Local<Boolean>`, `Local<Function>`, `Local<Array>`, `Local<ByteBuffer>`, `Local<Unsupported>`
5. `Global<T>`, `Weak<T>`

在正式使用ScriptX之前，请花半个小时**仔细阅读**下列文档，并熟悉 ScriptX 中的若干概念。

1. [CMake项目引入指引](ImportScriptX.md)
2. [基本概念](Basics.md) 这部分比较重要
    1. 约定
    1. 预定义宏
    1. Engine 与 MessageQueue
    1. Scope
    1. Value
    1. Local
    1. Global / Weak
3. [异常处理](Exception.md)
4. [C++绑定](NativeBinding.md)
    1. 创建一个Native的Function
    2. defineClass
    1. ScriptClass
    3. 各种操作
    4. 直接绑定C++函数
    5. converter
    6. 对现有C++类的绑定
    7. Tips: 选择重载函数
    8. Tips: 不同语言见的差异
5. [和原生引擎API的互操作](Interop.md)
    1. `script::v8_interop`
    1. `script::jsc_interop`
    1. `script::lua_interop`
6. [JavaScript语言说明](JavaScript.md)
    1. 类型对照表
7. [Lua语言说明](Lua.md)
8. [WebAssemble说明](WebAssembly.md)
9. [node.js说明](NodeJs.md)
9. [QuickJs说明](QuickJs.md)
10. [常见问题](FAQ.md)
11. [快速体验指南](QuickStart.md)
12. [性能相关](Performance.md)
13. [ScriptX在 2020年 Pure C++大会](PureCpp2020.md)