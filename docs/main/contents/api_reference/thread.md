# Thread

`ll/api/thread/` · **Common**

## Overview

The Thread module provides thread pool executors, server thread executors, and synchronization utilities for concurrent programming.

## Headers

| Header | Description |
|--------|-------------|
| `ll/api/thread/ThreadPoolExecutor.h` | Thread pool executor |
| `ll/api/thread/ServerThreadExecutor.h` | Server main thread executor |
| `ll/api/thread/GlobalThreadPauser.h` | Pause all game threads |
| `ll/api/thread/ThreadName.h` | Thread naming utility |

## Key Classes

### ThreadPoolExecutor

```cpp
namespace ll::thread {
class ThreadPoolExecutor : public coro::Executor {
public:
    explicit ThreadPoolExecutor(std::string name, size_t nThreads = 1);
    
    void resize(size_t nThreads);
    void destroy();
    
    void execute(std::function<void()>) const override;
    std::shared_ptr<data::CancellableCallback> executeAfter(std::function<void()>, Duration) const override;
    
    static ThreadPoolExecutor const& getDefault();
};
}
```

### ServerThreadExecutor

```cpp
namespace ll::thread {
class ServerThreadExecutor : public coro::Executor {
public:
    ServerThreadExecutor(std::string name, Duration maxOnceDuration, size_t checkPack);
    
    void execute(std::function<void()>) const override;
    std::shared_ptr<data::CancellableCallback> executeAfter(std::function<void()>, Duration) const override;
    
    static ServerThreadExecutor const& getDefault();
};
}
```

## Usage

### Thread Pool Execution

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"

void runInBackground() {
    auto& executor = ll::thread::ThreadPoolExecutor::getDefault();
    
    executor.execute([] {
        // This runs in a background thread
    });
}
```

### Server Thread Execution

```cpp
#include "ll/api/thread/ServerThreadExecutor.h"

void runOnServerThread() {
    auto& executor = ll::thread::ServerThreadExecutor::getDefault();
    
    executor.execute([] {
        // This runs on the server main thread
        // Safe to access game state here
    });
}
```

### Delayed Execution

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"
#include <chrono>

void scheduleTask() {
    auto& executor = ll::thread::ThreadPoolExecutor::getDefault();
    
    auto callback = executor.executeAfter(
        [] {
            // Runs after 5 seconds
        },
        std::chrono::seconds(5)
    );
    
    // Can cancel the callback
    // callback->cancel();
}
```

### Custom Thread Pool

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"

void createCustomPool() {
    ll::thread::ThreadPoolExecutor myPool("MyPool", 4);  // 4 threads
    
    myPool.execute([] {
        // Work
    });
    
    myPool.resize(8);  // Resize to 8 threads
}
```

## Related

- [Coroutine](coro.md) — Executors are used by coroutines
- [Chrono](chrono.md) — Duration types for delayed execution
