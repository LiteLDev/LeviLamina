# Coroutine（协程）

`ll/api/coro/` · **通用**

## 概述

Coroutine 模块提供了 C++20 协程基础设施，用于 LeviLamina 中的异步编程。包括协程任务（`CoroTask<T>`）、生成器（`Generator<T>`）、执行器和用于 sleep/yield 操作的 awaiter。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/coro/CoroTask.h` | 协程任务句柄 |
| `ll/api/coro/CoroPromise.h` | CoroTask 的 Promise 实现 |
| `ll/api/coro/CoroTaskAwaiter.h` | 任务 awaiter 内部实现 |
| `ll/api/coro/Generator.h` | 惰性序列生成器 |
| `ll/api/coro/Executor.h` | 抽象工作执行器基类 |
| `ll/api/coro/SleepAwaiter.h` | 异步休眠 awaiter |
| `ll/api/coro/YieldAwaiter.h` | 让出执行 awaiter |
| `ll/api/coro/ForwardAwaiter.h` | 转发 awaiter |
| `ll/api/coro/Collect.h` | 收集多个协程结果 |

## 核心类

### CoroTask\<T\>

协程任务句柄，主要的异步返回类型。

```cpp
namespace ll::coro {
template <class T = void>
class CoroTask {
public:
    using Result         = T;
    using ExpectedResult = Expected<T>; // void 时为 Expected<>

    bool done() const;

    void setExecutor(ExecutorRef ex);
    ExecutorRef getExecutor();

    // co_await 获取值（出错时抛异常）
    auto operator co_await();     // -> ValueAwaiter

    // co_await 获取 Expected<T>（从不抛异常）
    auto tryGet();                // -> ExpectedAwaiter

    // 在执行器上启动并回调
    template <std::invocable<ExpectedResult> F>
    void launch(NonNullExecutorRef executor, F&& callback) noexcept;

    void launch(NonNullExecutorRef executor) noexcept;

    // 同步阻塞启动
    ExpectedResult syncLaunch(NonNullExecutorRef executor) noexcept;
};
}
```

### Generator\<T\>

惰性序列生成器，使用 `co_yield` 按需产生值。

```cpp
namespace ll::coro {
template <class T>
struct Generator {
    struct iterator; // input_iterator

    iterator begin();
    iterator end() noexcept;
};
}
```

### Executor

调度协程工作的抽象基类。

```cpp
namespace ll::coro {
class Executor {
public:
    virtual void execute(std::function<void()>) const = 0;
    virtual std::shared_ptr<data::CancellableCallback> executeAfter(
        std::function<void()>, Duration
    ) const = 0;
};
}
```

## 使用方法

### 基本协程任务

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

ll::coro::CoroTask<int> computeAsync() {
    // 模拟异步工作
    co_return 42;
}

void example() {
    auto task = computeAsync();
    auto result = task.syncLaunch(ll::thread::ThreadPoolExecutor::getDefault());
    if (result) {
        // result.value() == 42
    }
}
```

### 链式协程

```cpp
#include "ll/api/coro/CoroTask.h"

ll::coro::CoroTask<int> fetchData() {
    co_return 100;
}

ll::coro::CoroTask<std::string> processData() {
    int data = co_await fetchData();
    co_return std::to_string(data);
}
```

### 使用 tryGet 进行错误处理

```cpp
#include "ll/api/coro/CoroTask.h"

ll::coro::CoroTask<int> mightFail() {
    throw std::runtime_error("出了点问题");
    co_return 0;
}

ll::coro::CoroTask<> safeProcess() {
    auto result = co_await mightFail().tryGet();
    if (!result) {
        // 无异常地处理错误
    }
}
```

### 生成器

```cpp
#include "ll/api/coro/Generator.h"

ll::coro::Generator<int> range(int start, int end) {
    for (int i = start; i < end; ++i) {
        co_yield i;
    }
}

void example() {
    for (auto val : range(0, 10)) {
        // val = 0, 1, 2, ..., 9
    }
}
```

### 带回调启动

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

ll::coro::CoroTask<int> asyncWork() {
    co_return 42;
}

void launchExample() {
    asyncWork().launch(
        ll::thread::ThreadPoolExecutor::getDefault(),
        [](ll::Expected<int> result) {
            if (result) {
                // 使用 *result
            }
        }
    );
}
```

### 收集多个任务

```cpp
#include "ll/api/coro/CoroTask.h"

ll::coro::CoroTask<int> taskA() { co_return 1; }
ll::coro::CoroTask<int> taskB() { co_return 2; }

ll::coro::CoroTask<> collectExample() {
    auto [a, b] = co_await ll::coro::collectAll(taskA(), taskB());
    // a 和 b 的类型是 Expected<int>
}
```

## 相关模块

- [Thread（线程工具）](thread.zh.md) — `ThreadPoolExecutor` 和 `ServerThreadExecutor` 实现了 `Executor`
- [操作指南：协程](../developer_guides/how_to_guides/coro_guide.md) — 分步教程
