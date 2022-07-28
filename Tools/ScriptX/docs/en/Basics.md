There are detailed comments in the ScriptX code. For specific functional logic and usage, please refer to the comments in the header file or [Doxygen document][doxygen]. In addition, the unit test covers almost all APIs of ScriptX, which can be used as sample code.

This document serves as a conceptual introduction to the command, allowing readers to have a unified conceptual understanding of ScriptX.

[doxygen]: TODO

[TOC]

# Code directory structure

```text
├── CMakeLists.txt
├── README.md
├── src # 1. ScriptX unified API definition, here only definition, almost no implementation.
│ ├── Engine.h
│ └── ...
├── backend # 2. Implement the above unified API for each script engine.
│ ├── JavaScriptCore
│ ├── Lua
│ ├── Python
│ ├── QuickJs
│ ├── Ruby
│ ├── SpiderMonkey
│ └── V8
└── test # 3. Unit test
    ├── CMakeLists.txt
    └── src
```
# Convention

## Namespace (namespace)
The implementation of ScriptX is all placed under the `script` namespace.

* `script`: The main namespace and public API are here
* `script::utils`: some helper classes
* `script::converter`: Type conversion of NativeBiding
* `script::internal`: internal implementation, users should not use these codes
* `script::xx_impl`: For the implementation of different engines, users should not use these codes

## Predefined Macro

In addition to the types and functions defined in the header file, ScriptX will also have predefined macros so that users can distinguish which engine and language are currently being used.
This function is commonly used in scenarios such as creating instances of `ScriptEngine`.

Engine type macro:
```
-SCRIPTX_BACKEND_V8
-SCRIPTX_BACKEND_JAVASCRIPTCORE
-SCRIPTX_BACKEND_SPIDERMONKEY
-SCRIPTX_BACKEND_QUICKJS
-SCRIPTX_BACKEND_LUA
-SCRIPTX_BACKEND_PYTHON
-SCRIPTX_BACKEND_RUBY
```

Engine language macro:
```
-SCRIPTX_LANG_JAVASCRIPT
-SCRIPTX_LANG_LUA
-SCRIPTX_LANG_PYTHON
-SCRIPTX_LANG_RUBY
```

For example:
```c++
script::ScriptEngine *engine;

// check engine type
#ifdef SCRIPTX_BACKEND_V8
    engine = create_v8_engine();
#elif defined(SCRIPTX_BACKEND_JAVASCRIPTCORE)
    engine = create_jsc_engine();
#endif

// check language by pre-defined MARCO
#ifdef SCRIPT_LANG_JAVASCRIPT
    engine->eval("console.log('hello world'):");
#elif defined(SCRIPT_LANG_LUA)
    engine->eval("print('hello world'):");
#endif

// check language by API
if (engine->getLanguageType() == script::ScriptLanguage::kJavaScript) {
    engine->eval("console.log('hello world'):");
} else {
    engine->eval("print('hello world'):");
}
```

# ScriptX interface

The `script::ScriptEngine` class is just an interface, there is no internal implementation logic, the real implementation is in each impl.

Eventually each impl will alias to `scriot::ScriptEngineImpl`.

See the header file comments for details.

The destructor of `ScriptEngine` is not public. Therefore, to destroy a ScriptEngine, you cannot directly delete it, but call its destroy method. This leads to the use of C++ smart pointers to execute a deleter. ScriptEngine provides an implementation version `ScriptEngine::Deleter`


In addition, `script::UniqueEnginePtr` is provided as the typealias of `std::unique_ptr`.

The method of use is as follows:
```c++
script::UniqueEnginePtr uniquePtr(engine);
std::unique_ptr<ScriptEngine, ScriptEngine::Deleter> uniquePtr1(engine);
std::shared_ptr<ScriptEngine> sharedPtr(engine, ScriptEngine::Deleter());
```

# MessageQueue

Each Engine has a MessageQueue corresponding to it, the main purpose is to achieve task scheduling, and to achieve event loop (such as JS setTimeOut interface) and so on.

These tasks include:
1. Timing GC at the bottom of the engine
2. Destruction and destruction of bound C++ objects
3. Actively put events on MessageQueue through the post interface
4. Wait

```c++

// main thread

// There is an endless loop inside, always fetching events for execution, and waiting if there is no event
engine->messageQueue().loopQueue();

// setTimeOut
engine->messageQueue().post(msg, std::chrono::milliseconds(20));

```

Of course, users can not use MessageQueue as the only event loop. For example, the game relies on each frame to drive the execution of the entire code logic.
But in this case, it is better to execute `MessageQueue::loopQueue` regularly to execute the events in it on time.

Such as:

```c++
void doFrame() {
    // do frame logic
    // ...

    // Execute MessageQueue once, only execute the message when the time is up, and then return immediately
    engine->messageQueue()->loopQueue(MessageQueue::LoopType::kLoopOnce);
}
```

See the MessageQueue documentation for details.

### Message::tag

One thing to note, because some backends allow multiple ScriptEngines to share a MessageQueue; so when you use this feature, the Message of MessageQueue has a tag field to distinguish which ScriptEngine this Message belongs to. Therefore, please specify the tag when you postMessage. In this way, ScriptEngine will release all the expired unexecuted Messages and call its release handler when it is destroyed. (Achieved by `messageQueue.removeMessageByTag(scriptEngine)`.)

PS: If a ScriptEngine corresponds to only one MessageQueue, the MessageQueue will be deconstructed when the ScriptEngine destroys, and all the internal **All** Messages will be released. In this case, the tag field may not be set.

```c++
Message msg([](auto& msg) {/* do action */ },
        [](auto& msg) {/* do clean up */ });

msg.tag = engine;
// ...

engine->messageQueue()->post(msg);
```

# ThreadPool

ThreadPool is a very simple thread pool implemented with the help of MessageQueue's capabilities.
When creating, you need to specify the number of worker threads. The worker thread informs the execution of `loopQueue`, and the post task may be executed on any thread.

# EngineScope and StackFrameScope

## EngineScope and ExitEngineScope

Refer to the design of V8 here. Since there are many interfaces related to Engine, they usually need an engine parameter. In order to make the code easier to use and more concise, a concept of `EngineScope` is designed here.

`EngineScope` is a **nodule** that isolates the engine environment. All ScriptX APIs can be used inside the scope, and only a few APIs can be used outside the scope (the main time will be clearly explained).

A `Scope` uses the `RAII` feature to act on the **stack**, and the scope is all the scopes surrounded by the Scope.

It should be noted that if there is no special note, almost all APIs require EngineScope (including some ScriptEngine interfaces). If there is no EngineScope, a `std::logic_error` exception will be thrown.

EngineScope can be reentrant and can be interleaved.
So you don't need to judge whether it is currently entered before using EngineScope.

In addition, you can use `ExitEngineScope` to exit temporarily in an EngineScope.

Such as:

```c++
{
    script::EngineScope engineScope(engine);
    EXPECT_EQ(script::EngineScope::currentEngine(), engine);
    {
        // reentrant
        script::EngineScope engineScope2(engine);
        EXPECT_EQ(script::EngineScope::currentEngine(), engine);

        {
            // can be interlaced
            script::EngineScope another(newEngine);
            EXPECT_EQ(script::EngineScope::currentEngine(), newEngine);

            {
                // Can temporarily exit
                script::ExitEngineScope exit;
                EXPECT_EQ(script::EngineScope::currentEngine(), nullptr);
            }
        }

        EXPECT_EQ(script::EngineScope::currentEngine(), engine);
    }
    EXPECT_EQ(script::EngineScope::currentEngine(), engine);
}

EXPECT_EQ(script::EngineScope::currentEngine(), nullptr);
```

Usually script engines are single-threaded and do not support concurrent calls. For these engines EngineSco