# 上手文档

ScriptX 中的一些重要类：
1. `ScriptEngine`
2. `EngineScope`
3. `Exception`
4. `Value`, `Null`, `Object`, `String`, `Number`, `Boolean`, `Function`, `Array`, `ByteBuffer`, `Unsupported`
5. `Local<Value>`, `Local<Null>`, `Local<Object>`, `Local<String>`, `Local<Number>`, `Local<Boolean>`, `Local<Function>`, `Local<Array>`, `Local<ByteBuffer>`, `Local<Unsupported>`
6. `Global<T>`, `Weak<T>`

在正式使用ScriptX之前，请花半个小时**仔细阅读**下列文档，并熟悉 ScriptX 中的若干概念。

1. [CMake项目引入指引](ImportScriptX.md)
2. [基本概念](Basics.md) 这部分比较重要
    1. 约定
    2. 预定义宏
    3. Engine 与 MessageQueue
    4. Scope
    5. Value
    6. Local
    7. Global / Weak
3. [异常处理](Exception.md)
4. [C++绑定](NativeBinding.md)
    1. 创建一个Native的Function
    2. defineClass
    3. ScriptClass
    4. 各种操作
    5. 直接绑定C++函数
    6. converter
    7. 对现有C++类的绑定
    8. Tips: 选择重载函数
    9. Tips: 不同语言见的差异
5. [和原生引擎API的互操作](Interop.md)
    1. `script::v8_interop`
    2. `script::jsc_interop`
    3. `script::lua_interop`
6. [JavaScript语言说明](JavaScript.md)
    1. 类型对照表
7. [Lua语言说明](Lua.md)
8. [WebAssemble说明](WebAssembly.md)
9. [node.js说明](NodeJs.md)
10. [QuickJs说明](QuickJs.md)
11. [常见问题](FAQ.md)
12. [快速体验指南](QuickStart.md)
13. [性能相关](Performance.md)
14. [ScriptX在 2020年 Pure C++大会](PureCpp2020.md)