# Getting started

Some important classes in ScriptX:
1. `ScriptEngine`
2. `EngineScope`
3. `Exception`
4. `Value`, `Null`, `Object`, `String`, `Number`, `Boolean`, `Function`, `Array`, `ByteBuffer`, `Unsupported`
5. `Local<Value>`, `Local<Null>`, `Local<Object>`, `Local<String>`, `Local<Number>`, `Local<Boolean>`, `Local<Function>` , `Local<Array>`, `Local<ByteBuffer>`, `Local<Unsupported>`
6. `Global<T>`, `Weak<T>`

Before officially using ScriptX, please spend half an hour **read carefully** the following documents, and be familiar with several concepts in ScriptX.

1. [CMake project introduction guide](ImportScriptX.md)
2. [Basic Concepts](Basics.md) This part is more important
   1. Agreement
   2. Predefined Macro
   3. Engine and MessageQueue
   4. Scope
   5. Value
   6. Local
   7. Global / Weak
3. [Exception Handling](Exception.md)
4. [C++ Binding](NativeBinding.md)
   1. Create a Native Function
   2. defineClass
   3. ScriptClass
   4. Various operations
   5. Binding C++ functions directly
   6. converter
   7. Binding of existing C++ classes
   8. Tips: Choose overloaded functions
   9. Tips: Differences in different languages
5. [Interoperability with native engine API] (Interop.md)
   1. `script::v8_interop`
   2. `script::jsc_interop`
   3. `script::lua_interop`
6. [JavaScript language description](JavaScript.md)
   1. Type comparison table
7. [Lua language description](Lua.md)
8. [WebAssemble Description](WebAssembly.md)
9. [node.js description](NodeJs.md)
10. [QuickJs description](QuickJs.md)
11. [FAQ](FAQ.md)
12. [Quick Experience/Start Guide](QuickStart.md)
13. [Performance Related](Performance.md)
14. [ScriptX at the 2020 Pure C++ Conference](PureCpp2020.md)