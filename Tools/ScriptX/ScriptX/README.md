<img width="350px" align="left" src="https://raw.githubusercontent.com/Tencent/ScriptX/main/docs/media/scriptx_logo.svg"></img>

<h2>ScriptX</h2>
<p>A versatile script engine abstraction layer</p>

---

[![README中文](https://img.shields.io/badge/README-%E4%B8%AD%E6%96%87-lightgreen)](README-zh.md) [![License](https://img.shields.io/badge/license-Apache--2.0-green)](https://www.apache.org/licenses/LICENSE-2.0) [![UnitTests](https://github.com/Tencent/ScriptX/actions/workflows/unit_tests.yml/badge.svg)](https://github.com/Tencent/ScriptX/actions/workflows/unit_tests.yml) ![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/tencent/ScriptX) ![Lines of code](https://img.shields.io/tokei/lines/github/tencent/ScriptX) ![GitHub top language](https://img.shields.io/github/languages/top/tencent/ScriptX) [![Coverage Status](https://coveralls.io/repos/github/Tencent/ScriptX/badge.svg)](https://coveralls.io/github/Tencent/ScriptX)

![ScriptX Architecture](docs/media/banner.webp)

ScriptX is a script engine abstraction layer. A variety of script engines are encapsulated on the bottom and a unified API is exposed on the top, so that the upper-layer caller can completely isolate the underlying engine implementation (back-end).

ScriptX not only isolates several JavaScript engines, but can even isolate different scripting languages, so that **the upper layer can seamlessly switch between scripting engine and scripting language without changing the code**.

In ScriptX terminology, "front-end" refers to the external C++ API, and "back-end" refers to different underlying engines. The currently implemented back-ends include: V8, node.js, JavaScriptCore, WebAssembly, Lua.

# States

| backend | language | version | states |
| :----: |  :----:  | :----:  | :----: |
| V8 | JavaScript | 7.4+ | done |
| JavaScriptCore | JavaScript | 7604.1.38.0.7+<br>（iOS 10+/macOS10.12+) | done |
| Node.js | JavaScript | 14.x+ | done |
| QuickJs | JavaScript | 2021-03-27 | done |
| WebAssembly | JavaScript | Emscripten-2.0.5+ | done |
| Lua | Lua | 5.4+ | done |
| CPython | Python |  | todo |
| YARV | Ruby |  | todo |
| Mono | C# |  | todo |

# Introduction

The interface of ScriptX uses modern C++ features. And to be 100% in line with the C++ standard, completely cross-platform.

All APIs are exposed in the `ScriptX.h` aggregate header file.

Design goals: **Multi-language** | **Multi-engine implementation** | **High performance** | **API easy to use** | **Cross-platform**

# First impression

We use a relatively complete code to leave an overall impression of ScriptX.

```c++
EngineScope enter(engine);
try {
  engine->eval("function fibo(x) {if (x<=2) return 1; else return fibo(x-1) + fibo(x-2) }");
  Local<Function> fibo = engine->get("fibo").asFunction();
  Local<Value> ret = fibo.call({}, 10);
  ret.asNumber().toInt32() == 55;

  auto log = Function::newFunction(
      [](const std::string& msg) {
        std::cerr << "[log]: "<< msg << std::endl;
      });
  // or use: Function::newFunction(std::puts);
  engine->set("log", log);
  engine->eval("log('hello world');");

  auto json = engine->eval(R"( JSON.parse('{"length":1,"info":{"version": "1.18","time":132}}'); )")
                  .asObject();
  json.get("length").asNumber().toInt32() == 1;

  auto info = json.get("info").asObject();
  info.get("version").asString().toString() == "1.18";
  info.get("time").asNumber().toInt32() == 132;

  Local<Object> bind = engine->eval("...").asObject();
  MyBind* ptr = engine->getNativeInstance<MyBind>(bind);
  ptr->callCppFunction();

} catch (Exception& e) {
  FAIL() << e.message() << e.stacktrace();
  // or FAIL() << e;
}
```

1. Use `EngineScope` to enter the engine environment
2. Most APIs can accept C++ native types as parameters and automatically convert types internally
3. Script functions can be created directly from C/C++ functions (native binding)
4. Support script exception handling
5. API strong typing

# Feature introduction

## 1. Support multiple engines, multiple scripting languages
At the beginning of the design of ScriptX, the goal was to support multiple scripting languages, and the engine package of V8 and JavaScriptCore was implemented on JavaScript.
In order to verify the multi-language design of ScriptX, a complete Lua binding was implemented.
Currently support for WebAssembly has also been completed.

## 2. Modern C++ API

API design conforms to modern C++ style, such as:
1. Three reference types Local/Global/Weak, using copy and move semantics to achieve automatic memory management (automatic reference counting)
2. Use variadic template to support the very convenient Function::call syntax
3. Use Template Meta-Programing to directly bind C++ functions

Modern language features, refer to null pointer safety (nullability safety please refer to the concept of kotlin).

> Note: ScriptX requires C++17 (or 1z) or higher compiler support, and needs to turn on the exception feature (you can turn off the RTTI feature).

## 3. High performance
High performance is an important indicator in the design of ScriptX. The C++ idea of Zero-Overhead is also fully embodied in the implementation process. And pass relevant performance tests when adding functional features.

![Performance test comparison data](docs/media/performance.webp)

Test indicator: single time consuming from JS to C++ function call, microsecond

Test environment: iMac i9-9900k 32G RAM @macOS 10.15

Test Index: single function call from js to C++ in micro seconds.
Test Environment: iMac i9-9900k 32G RAM @macOS 10.15

The performance test shows that in Release mode, ScriptX can achieve almost the same performance as the native binding. (Because ScriptX uses a large number of templates, please do not perform performance testing in the Debug version)

## 4. Convenient exception handling

ScriptX has realized the ability of script exceptions and C++ exceptions to communicate with each other through a series of technical means. There is no need to judge the return value when calling the engine API, and unified exception handling can be used to avoid crashes.

For example, users can catch exceptions thrown by js code in the C++ layer, and get the message and stack; they can also throw a C++ exception (`script::Exception`) in the native function and pass it through to the js code.

For details, please refer to [ExceptionTest](test/src/ExceptionTest.cc) and [Related Documents](docs/en/Exception.md)

## 5. Easy-to-use API

> Easy-to-use API => Happy Engineer => Efficient => High Quality

ScriptX was designed with full consideration of the ease of use of the API, including friendly and simple operation, not easy to make mistakes, obvious error messages, and easy to locate problems. Under this guiding ideology, ScriptX has done a lot of things that native engines can't do.

For example: V8 does not perform GC when destroying, resulting in many bound native classes that cannot be released. ScriptX does additional logic to handle this situation.

V8 and JSCore require that other APIs of ScriptX cannot be called in the finalize callback, otherwise it will crash, which also makes the code logic difficult to implement. ScriptX uses MessageQueue to avoid this problem perfectly.

The global references of V8 and JSCore must be released before the engine is destroyed, otherwise it will cause problems such as crash and failure to destroy. ScriptX guarantees to actively reset all Global / Weak references during Engine destruction.

## 6. Simple yet efficient binding API

When an app is used as a host to use a scripting engine, it is usually necessary to inject a large number of native-bound functions/classes to provide capabilities for the scripting logic. The `ClassDeifine` related binding API designed by ScriptX is simple and easy to use, and can support direct binding of C++ functions, which greatly improves work efficiency.

## 7. Interoperable with native engine API
While ScriptX provides engine encapsulation, it also provides a set of tools and methods to achieve mutual conversion between native types and ScriptX types.

For details, please refer to [InteroperateTest](test/src/InteroperateTest.cc) and [Related Documents](docs/en/Interop.md)

# Code quality

High code quality requirements
1. Hundreds of test cases, **UnitTests coverage rate reaches 90+%**
2. **The cyclomatic complexity is only 1.18**.
3. Use clang-format to ensure uniform code format.
4. Use clang-tidy to find potential problems.
5. Both clang and MSVC compilers have opened "warning as error" level error messages.

# Code directory structure

```text
root
├── README.md
├── src
│ ├── Engine.h
│ └── ...
├── backend
│ ├── JavaScriptCore
│ ├── Lua
│ ├── Python
│ ├── QuickJs
│ ├── Ruby
│ ├── SpiderMonkey
│ ├── Template
│ ├── V8
│ ├── WKWebView
│ └── WebAssembly
├── docs
│ ├── Basics.md
│ └── ...
└── test
    ├── CMakeLists.txt
    └── src
        ├── Demo.cc
        └── ...
```

1. `src`: External API, mainly header files
2. `backend`: Implementation of various engine backends
3. `docs`: Rich documentation
4. `test`: Various unit tests

# Getting started

Some important classes in ScriptX:
1. `ScriptEngine`
2. `EngineScope`
2. `Exception`
3. `Value`, `Null`, `Object`, `String`, `Number`, `Boolean`, `Function`, `Array`, `ByteBuffer`, `Unsupported`
4. `Local<Value>`, `Local<Null>`, `Local<Object>`, `Local<String>`, `Local<Number>`, `Local<Boolean>`, `Local<Function>` , `Local<Array>`, `Local<ByteBuffer>`, `Local<Unsupported>`
5. `Global<T>`, `Weak<T>`

Before officially using ScriptX, please spend half an hour **read carefully** [the project documents](docs/en/TOC.md), and be familiar with several concepts in ScriptX.
