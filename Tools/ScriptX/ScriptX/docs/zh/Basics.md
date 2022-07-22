ScriptX的代码中有详细的注释，具体功能逻辑及使用方法可以参考头文件中的注释，或者 [Doxygen文档][doxygen] ，另外单元测试几乎覆盖了ScriptX所有API，可以作为使用的示例代码。

该文档作为统领的概念介绍，让读者对ScriptX有统一的概念理解。

[doxygen]: TODO

[TOC]

# 代码目录结构

```text
├── CMakeLists.txt
├── README.md
├── src         # 1. ScriptX 统一API定义，这里只有定义，几乎无实现。
│   ├── Engine.h
│   └── ...
├── backend     # 2. 针对各个脚本引擎，实现上述统一API。
│   ├── JavaScriptCore
│   ├── Lua
│   ├── Python
│   ├── QuickJs
│   ├── Ruby
│   ├── SpiderMonkey
│   └── V8
└── test        # 3. 单元测试
    ├── CMakeLists.txt
    └── src
```
# 约定

## 命名空间（namespace）
ScriptX的实现全部放在 `script` 命名空间下。

* `script`: 主要namespace，公开API都在这里
* `script::utils`: 一些帮助类
* `script::converter`: NativeBiding的类型转换
* `script::internal`: 内部实现，使用者不应该使用这些代码
* `script::xx_impl`: 针对不同引擎的实现，使用者不应该使用这些代码

## 预定义宏

除了头文件定义的类型和函数，ScriptX也会有预定义的宏，以便使用者区分当前使用的是何种引擎，何种语言。
该功能在创建`ScriptEngine`实例等场景下比较常用。

引擎类型宏：
```
- SCRIPTX_BACKEND_V8
- SCRIPTX_BACKEND_JAVASCRIPTCORE
- SCRIPTX_BACKEND_SPIDERMONKEY
- SCRIPTX_BACKEND_QUICKJS
- SCRIPTX_BACKEND_LUA
- SCRIPTX_BACKEND_PYTHON
- SCRIPTX_BACKEND_RUBY
```

引擎语言宏：

```
- SCRIPTX_LANG_JAVASCRIPT
- SCRIPTX_LANG_LUA
- SCRIPTX_LANG_PYTHON
- SCRIPTX_LANG_RUBY
```

举例：
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

# ScriptX 接口

`script::ScriptEngine` 类只是一个接口，其内部没有实现逻辑，真正的实现在各个impl里。

最终各个impl会alias到 `scriot::ScriptEngineImpl` 。

详见头文件注释。

`ScriptEngine`的析构函数不是public。因此要销毁一个ScriptEngine不能直接delete，而是调用其destroy方法。这导致使用C++的智能指针需要执行一个deleter，ScriptEngine提供了一个实现版本`ScriptEngine::Deleter`


另外提供了 `script::UniqueEnginePtr` 作为 `std::unique_ptr` 的 typealias。

使用方法如下：
```c++
script::UniqueEnginePtr uniquePtr(engine);
std::unique_ptr<ScriptEngine, ScriptEngine::Deleter> uniquePtr1(engine);
std::shared_ptr<ScriptEngine> sharedPtr(engine, ScriptEngine::Deleter());
```

# MessageQueue 

每个Engine都有一个MessageQueue与之对应，主要目的是实现任务调度，以及实现事件循环（如JS的setTimeOut接口）等。

这些任务包括：
1. 引擎底层的定时GC
2. 绑定的C++对象的销毁析构
3. 通过post接口主动放到 MessageQueue 的事件
4. 等

```c++

// main thread

// 内部是一个死循环，一直取事件执行，没有事件则会等待
engine->messageQueue().loopQueue();

// setTimeOut
engine->messageQueue().post(msg, std::chrono::milliseconds(20));

```

当然使用者可以不使用MessageQueue作为唯一的事件循环，比如游戏靠每一帧来驱动整个代码逻辑的执行。
但是这种情况下还是定时执行一下`MessageQueue::loopQueue`将其中的事件按时执行掉。

如：

```c++
void doFrame() {
    // do frame logic
    // ...

    // 执行一次MessageQueue，仅把到时间的message执行掉，然后立即返回
    engine->messageQueue()->loopQueue(MessageQueue::LoopType::kLoopOnce);
}
```

详见 MessageQueue 文档。

### Message::tag

有一点需要注意，因为部分backend允许多个ScriptEngine共享一个MessageQueue；所以当你使用该特性时，MessageQueue的Message有一个tag字段，用来区分这个Message属于哪个ScriptEngine，因此在postMessage的时候请指定tag，这样ScriptEngine在destroy的时候会把到期没执行的Message全部release掉，并调用其release handler。（通过`messageQueue.removeMessageByTag(scriptEngine)`实现。)

PS: 如果一个ScriptEngine只对应一个MessageQueue，则在ScriptEngine destroy的时候会析构掉MessageQueue，那么内部的**所有** Message 都将release，这种情况可以不设置tag字段。

```c++
Message msg([](auto& msg) { /* do action */ }, 
        [](auto& msg) { /* do clean up */ });

msg.tag = engine;
// ...

engine->messageQueue()->post(msg);
```

# ThreadPool

ThreadPool是借助MessageQueue的能力实现的一个很简单的线程池。
创建的时候需要指定worker线程数量，worker线程通知执行 `loopQueue` ，post的任务可能在任意一个线程上执行。

# EngineScope 与 StackFrameScope

## EngineScope 与 ExitEngineScope

这里参考V8的设计，由于和Engine相关的接口较多，通常他们都会需要一个engine参数。为了让代码更易用也更简洁，这里设计了一个`EngineScope`的概念。

`EngineScope` 是一个**结节**，将引擎环境隔离开，在Scope内部可以使用所有ScriptX的API，在Scope外面只有少数几个API能用（主时中会明确说明）。

一个`Scope`利用`RAII`特性，作用于**栈**上，作用域是所有被该Scope所包围的范围。

需要注意的是，如无特殊注释，几乎所有的API都需要EngineScope（包括部分ScriptEngine的接口），如果没有EngineScope将会抛出`std::logic_error`异常。

EngineScope 可以重入，可以交错。
因此你不需要在使用EngineScope之前判断当前是否已经进入。

此外你还可以在一个EngineScope内使用`ExitEngineScope`临时退出一下。

如：

```c++
{
    script::EngineScope engineScope(engine);
    EXPECT_EQ(script::EngineScope::currentEngine(), engine);
    {
        // 可重入
        script::EngineScope engineScope2(engine);
        EXPECT_EQ(script::EngineScope::currentEngine(), engine);

        {
            // 可交错
            script::EngineScope another(newEngine);
            EXPECT_EQ(script::EngineScope::currentEngine(), newEngine);

            {
                // 可临时退出
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

通常脚本引擎都是单线程的，不支持并发调用，对于这些引擎 EngineScope 内部会自动加锁；相应的ExitEngineScope会解锁。

## StackFrameScope

要调用一个脚本方法，你需要有一个脚本引擎的栈才行，因此你需要创建一个`StackFrameScope`来表示这个scope内部是一个**栈帧**。
一个栈帧对应一个函数调用。当栈帧退出时，内部所有局部变量都会被销毁——只有一个例外——函数返回值；

**如果要从一个栈帧中返回一个值到上一个栈帧，需要使用方法`StackFrameScope::returnValue`**。

例如：

```c++
{
    EngineScope engineScope(engine);
    Local<Value> val;

    {
        StackFrameScope stack;
        // return to outer
        val = stack.returnValue(getSomeVal());
    }
}
```

通常来说你不需要自己使用一个StackFrameScope，因为EngineScope已经蕴含了一个（这样你才能使用Local引用），只是EngineScope所蕴含的栈帧是不能返回值的（你不能跨越结节，就不能返回一个Engine的局部变量到Engine外面）。

使用StackFrameScope的场景通常是需要创建大量的局部变量，这些变量过多可能导致爆栈（StackOverFlow），此时你需要合理的使用栈帧，将他们及时释放。
例如：

```c++

for (auto& x: ...) {    
    StackFrameScope scope;
    Local<Value> val1;
    Local<Value> val2;
    // 循环体结束时val1和val2都会释放掉
}

```

## 使用建议：

EngineScope的设计虽然使得API在使用时更便利，但是从程序设计上来说其实更容易出现问题，使用者可能会忘记使用EngineScope就调用相关方法，这样会导致抛出`std::logic_error`导致crash。
因此这里给出一个建议的使用范式：

**1. 使用者在需要调用ScriptEngine的函数(f)内部自己包装一个EngineScope，而不是以外调用者在调用这个函数之前使用ScriptEngine包起来。**

这样一来其他地方可以随意的调用函数f，而无需关心EngineScope。

对于一些函数逻辑复杂，长度较长，必须拆分成多个函数的场景。这里我们可以参考锁的使用，当一个方法必须在锁里面使用的时候我们通常会在其方法名最后加上后缀`Locked`如`getResourceLocked`。

**2. 类似的我们可以在方法名后面加上后缀==WithEngine== `callbackToScriptWithEngine`, `getValueFromScriptWithEngine`，同时加以明确的注释防止误用。**

如：

```c++

void callbackToScript() {
    EngineScope scope(engine);
    // do something
}

if (done) {
    callbackToScript();
}

void callbackToScript() {
    EngineScope scope(engine);
    // do something
    Local<Value> one = getFromScriptWithEngine();
    Local<Value> val = calculateWithengine(one);
    useWithEngine(val);
}

// 加上 WithEngine 后缀，表示方法需要在EnginScope内部调用。
Local<Value> getFromScriptWithEngine() {
    return obj.get("some_val");
}

```

# 各种值类型

ScriptX支持若干种类型：

- Null
- Object
- String
- Number
- Boolean
- Function
- Array
- ByteBuffer
- Unsupported

ByteBuffer 是内存块，对于JS是`ArrayBuffer`或者各种`BufferView`。

Unsupported 是在脚本语言中有的类型，但是在ScriptX中没有类型可以对应。比如JS的BigInt类型。
`Unsupported` 虽然不支持任何操作，但是可以用来做透传，如：
```c++
Local<Value> value = obj1.get(key);

Local<Unsupported> un = value.asUnsupported();

obj2.set(key, value);

// 等价
obj2.set(key, un);
```

注意: 对于JS有`null`和`undefined`两种类型，在ScriptX中统一收归为`script::Null`类型。同时ScriptX的`script::Null`在传递给JS的时候统一为`undefined`。

在ScriptX中定义了上述类型对应的class，但是这些class只有静态方法，且都属于工厂方法，用于创建对应的类型的实例。对于实例的操作，则全部都在`Local<>`模板中定义，对于不同的类型模板特化出了不同的方法。例如：

```c++
// String 只有工厂方法用于创建新的 String
Local<String> hello = String::newString("hello");
// Local<String> 则包含了 String 的所有能力
std::string utf8 = hello.toString();

Local<Number> num = Number::newNumber(321);
int32_t = num.toIn32();

Local<Object> obj = Object::newObject();
obj.set(hello, num);

Local<Function> func = ...;
func.call({}, hello, num);
```

# 三种引用类型 Local/Global/Weak

ScriptX将引用分成三类：

1. Local：局部变量的引用，在函数内部使用的引用。仅在栈帧内有效。
2. Global：全局引用，在函数退出后仍然有效，强引用住一个对象。
3. Weak：全局弱引用，和Global一样，区别是它是弱引用，因此引用的对象可能被GC。

所有的ScriptX执行相关API都会需要一个Local来实现函数调用。Global和Weak在这种情况下要通过`get`方法，获得一个局部引用。

这三种引用类型，除非创建空引用，其他操作则都必须在EngineScope内。


PS：为了API的便利，**Global/Weak 的析构函数会默认将非空的引用置为empty，调用其reset方法**，他们的析构可以不再EngineScope内。
**ScriptEngine在destroy的时候会自动将所有 Global/Weak 引用 reset 掉。**

## Local 引用

在这三种引用中 `Local` 将会是使用的最多的一个，`Local`的一些设计可能会没有那么直观，这里做一些说明。

`Local` 本身是一个空模板，`Local<Object>`, `Local<Stirng>` 均为特化模板，所以从C++的类型系统来看 `Local<Object>` 和 `Local<String>` 都是不同的类，因此就可以针对不同的引用类型来添加不同的成员方法。

`Local<Value>` 是一个特殊的引用，它相当于 C++ 的 `void*`指针，或者 kotlin 的 `Any?` 引用，表示可以是任何一个类型的引用。他只有引用类型的判断方法，没有具体的类型方法。另外是有一些通用方法，比如类似java `toString` 的 `Local<Value>::describeUtf8()` 方法。

所有的其他 `Local` 引用都可以隐式的转换成 `Local<Value>`，如：
```c++
Local<Value> func() {
    Local<Number> num = Number::newNumber(42);
    return num;
}
````

另外 `Local<Value>::getKind` 返回这个类型最具体的类型。比如JS中的ByteBuffer同时也是Object，Lua中的Array也是Object：

```c++

// js engine
Local<ByteBuffer> byte = ...;
Local<Value> ref = byte;

ref.getKind() == ValueKine::kByteBuffer;
ref.isObject() == true;

```

## Local引用的空指针安全

参考kotlin的空指针安全性设计，ScriptX中只允许`Local<Value>`引用为null即nullable；其他所有引用都不能为null，即nonnull。

这样从类型系统上就保证了 `Local<Object>` 不会为null，一定指向一个合法的`Object`对象。

**move语义**：`Local<Value>` move 之后相当于调用 `reset` 会变为null， 其他引用则不可再使用，否则是Undefined Behavior。

如
```c++

Local<Value> ref;
ref.isNull() == true;

ref.asObject(); // throw Exception("NullPointerException");


ref = Object::newObject();
ref.isNull() == false;
Local<Object> obj = ref.asObject(); // ok
// obj can't be null

func(std::move(obj));
// move 之后 obj 就不能再使用了

// 不可编译，没有默认构造函数
Local<String> str;

```