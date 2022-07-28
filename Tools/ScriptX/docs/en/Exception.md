# Exception model

In scripting languages, we can usually call methods arbitrarily, just add a try-catch block to the outermost layer of the method, and exceptions can be handled easily without checking everywhere.

However, in the C API of a scripting language, exceptions in internal scripts are usually exposed in the form of similar error codes. This results in every call to an API to check whether an exception occurs. Otherwise, continuing to execute the logic in the event of an exception will usually cause problems, or even crash.

Therefore, by design, ScriptX converts exceptions in scripts into C++ exceptions and throws them out, so that C++ codes can also handle exceptions conveniently and avoid multiple problems and crashes at the same time.

Compare:
```c++
// V8 needs to be checked everywhere

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

`script::Exception` is a C++ exception type, which wraps script exceptions and provides convenient methods to obtain exception messages and stacks. have to be aware of is:

1. `script::Exception`: must be created in EngineScope.
2. Almost all interfaces that require EngineScope may throw exceptions (unless there is noexcept modification).

**Conclusion: Almost all EngineScope must be followed by a try-catch to handle script::Exception.** As mentioned in the code example above, unless you need to crash the process when an exception occurs.

## Throw exceptions & catch exceptions.
Exceptions can be passed between JS and C++. for example:

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
For details, see Unit Test [ExceptionTest](../../test/src/ExceptionTest.cc)