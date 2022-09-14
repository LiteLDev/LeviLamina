# Getting started

Some important classes in ScriptX:
1. `ScriptEngine`
2. `EngineScope`
2. `Exception`
3. `Value`, `Null`, `Object`, `String`, `Number`, `Boolean`, `Function`, `Array`, `ByteBuffer`, `Unsupported`
4. `Local<Value>`, `Local<Null>`, `Local<Object>`, `Local<String>`, `Local<Number>`, `Local<Boolean>`, `Local<Function>` , `Local<Array>`, `Local<ByteBuffer>`, `Local<Unsupported>`
5. `Global<T>`, `Weak<T>`

Before officially using ScriptX, please spend half an hour **read carefully** the following documents, and be familiar with several concepts in ScriptX.

1. [CMake project introduction guide](ImportScriptX.md)
2. [Basic Concepts](Basics.md) This part is more important
   1. Agreement
   1. Predefined Macro
   1. Engine and MessageQueue
   1. Scope
   1. Value
   1. Local
   1. Global / Weak
3. [Exception Handling](Exception.md)
4. [C++ Binding](NativeBinding.md)
   1. Create a Native Function
   2. defineClass
   1. ScriptClass
   3. Various operations
   4. Binding C++ functions directly
   5. converter
   6. Binding of existing C++ classes
   7. Tips: Choose overloaded functions
   8. Tips: Differences in different languages
5. [Interoperability with native engine API] (Interop.md)
   1. `script::v8_interop`
   1. `script::jsc_interop`
   1. `script::lua_interop`
6. [JavaScript language description](JavaScript.md)
   1. Type comparison table
7. [Lua language description](Lua.md)
8. [WebAssemble Description](WebAssembly.md)
9. [node.js description](NodeJs.md)
10. [QuickJs description](QuickJs.md)
10. [FAQ](FAQ.md)
11. [Quick Experience/Start Guide](QuickStart.md)
12. [Performance Related](Performance.md)
13. [ScriptX at the 2020 Pure C++ Conference](PureCpp2020.md)