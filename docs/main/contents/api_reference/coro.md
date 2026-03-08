# Coroutine

`ll/api/coro/` · **Common**

## Overview

The Coroutine module provides C++20 coroutine infrastructure for asynchronous programming in LeviLamina. It includes coroutine tasks (`CoroTask<T>`), generators (`Generator<T>`), executors, and awaiters for sleep and yield operations.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/coro/CoroTask.h` | Coroutine task handle |
| `ll/api/coro/CoroPromise.h` | Promise implementation for CoroTask |
| `ll/api/coro/CoroTaskAwaiter.h` | Task awaiter internals |
| `ll/api/coro/Generator.h` | Lazy sequence generator |
| `ll/api/coro/Executor.h` | Abstract work executor base |
| `ll/api/coro/SleepAwaiter.h` | Async sleep awaiter |
| `ll/api/coro/YieldAwaiter.h` | Yield to executor awaiter |
| `ll/api/coro/ForwardAwaiter.h` | Forward awaiter |
| `ll/api/coro/Collect.h` | Collect multiple coroutine results |

## Key Classes

### CoroTask\<T\>

A coroutine task handle. The primary async return type.

```cpp
namespace ll::coro {
template <class T = void>
class CoroTask {
public:
    using Result         = T;
    using ExpectedResult = Expected<T>; // or Expected<> for void

    bool done() const;

    void setExecutor(ExecutorRef ex);
    ExecutorRef getExecutor();

    // co_await this to get the value (throws on error)
    auto operator co_await();     // -> ValueAwaiter

    // co_await this to get Expected<T> (never throws)
    auto tryGet();                // -> ExpectedAwaiter

    // Launch on an executor with callback
    template <std::invocable<ExpectedResult> F>
    void launch(NonNullExecutorRef executor, F&& callback) noexcept;

    void launch(NonNullExecutorRef executor) noexcept;

    // Synchronous blocking launch
    ExpectedResult syncLaunch(NonNullExecutorRef executor) noexcept;
};
}
```

### Generator\<T\>

A lazy sequence generator. Produces values on demand using `co_yield`.

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

Abstract base for scheduling coroutine work.

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

## Usage

### Basic Coroutine Task

```cpp
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

ll::coro::CoroTask<int> computeAsync() {
    // Simulate async work
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

### Chaining Coroutines

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

### Error Handling with tryGet

```cpp
#include "ll/api/coro/CoroTask.h"

ll::coro::CoroTask<int> mightFail() {
    throw std::runtime_error("Something went wrong");
    co_return 0;
}

ll::coro::CoroTask<> safeProcess() {
    auto result = co_await mightFail().tryGet();
    if (!result) {
        // Handle error without exception
    }
}
```

### Generator

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

### Launching with Callback

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
                // Use *result
            }
        }
    );
}
```

### Collecting Multiple Tasks

```cpp
#include "ll/api/coro/CoroTask.h"

ll::coro::CoroTask<int> taskA() { co_return 1; }
ll::coro::CoroTask<int> taskB() { co_return 2; }

ll::coro::CoroTask<> collectExample() {
    auto [a, b] = co_await ll::coro::collectAll(taskA(), taskB());
    // a and b are Expected<int>
}
```

## Related

- [Thread](thread.md) — `ThreadPoolExecutor` and `ServerThreadExecutor` implement `Executor`
- [How-to Guide: Coroutines](../developer_guides/how_to_guides/coro_guide.md) — Step-by-step tutorial
