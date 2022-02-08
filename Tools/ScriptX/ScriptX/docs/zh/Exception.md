
# 异常模型

在脚本语言中，我们通常可以任意调用方法，只需要在方法最外层加一个 `try-catch` 块即可，异常就能很方便的被处理，而无需到处检查。

但是在脚本语言的C API中，通常会把内部脚本出现的异常以类似错误码的形式暴露。这就导致了每调用一个API都要检查是否有异常发生。否则在有异常发生的情况下继续执行逻辑通常会有问题，甚至带来crash。

因此ScriptX在异常模型设计时将脚本出现的异常，统一转成C++异常向外抛出，使得C++代码也可以很方便的处理异常，同时避免多种问题及crash。

对比一下：
```c++
// V8 需要到处检查

{
    v8::TryCatch tryCatch;
    auto ret = eval("string source");
    if (tryCatch.hasCaught()) retrun false;

    auto result = ret.get(key):
    if (tryCatch.hasCaught()) retrun false;

    auto obj = get(obj);
    if (tryCatch.hasCaught()) retrun false;

    obj.set(key, result);
    if (tryCatch.hasCaught()) retrun false;

    return true;
}

// ScriptX

{
    script::EngineScope scope(engine);
    try {
        engine->eval("string source");
        auto result = ret.get(key):
        auto obj = get(obj);
        obj.set(key, result);
        return true;
    } catch(script::Exception& e) {
        log << e;
        return false;
    }
}
```

`script::Exception`是C++的异常类型，包装了脚本异常，提供了便利的方法来获取异常的消息和堆栈。需要注意的是：

1. `script::Exception`:必须在EngineScope内创建。
2. 几乎所有需要EngineScope的接口都有可能抛异常(除非有noexcept修饰)。

**结论：几乎所有的EngineScope都要紧跟一个try-catch用于处理script::Exception异常**。如上代码实例所述，除非你需要在发生异常时 crash掉进程。

## 抛异常&捕获异常。
异常可以在JS和C++间传递。举个例子：

```c++

// 1. script throw, c++ catch
try{
    engine->eval("throw Error('hello error')");
    FAIL();
} catch (const script::Exception& e) {
    std::cout << e.message() << e.stacktrace();
}

// 2. c++ throw, sript catch
auto func = Function::newFunction([](const script::Arguments& args) {
        // c++ throw exception
        throw Exception("invalid argument");
});

engine->set("func", func);
auto ret = engine->eval(R"(
    try {
        func();
        false;
    } catch (e) {
        true;
    }}
)");
EXPECT_TRUE(ret.isBoolean());
EXPECT_TRUE(ret.asBoolean().value());

// 3. c++ throw, c++ catch
try{
    func.call({});
    FAIL();
} catch (const script::Exception& e) {
    log << e.message() << e.stacktrace();
}
```
详见单元测试 [ExceptionTest](../../test/src/ExceptionTest.cc)