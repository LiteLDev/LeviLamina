# Thread（线程工具）

`ll/api/thread/` · **通用**

## 概述

Thread 模块提供了线程池执行器、服务器线程执行器和用于并发编程的同步工具。

## 头文件

| 头文件 | 说明 |
|--------|------|
| `ll/api/thread/ThreadPoolExecutor.h` | 线程池执行器 |
| `ll/api/thread/ServerThreadExecutor.h` | 服务器主线程执行器 |
| `ll/api/thread/GlobalThreadPauser.h` | 暂停所有游戏线程 |
| `ll/api/thread/ThreadName.h` | 线程命名工具 |

## 核心类

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

## 使用方法

### 线程池执行

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"

void runInBackground() {
    auto& executor = ll::thread::ThreadPoolExecutor::getDefault();
    
    executor.execute([] {
        // 在后台线程中运行
    });
}
```

### 服务器线程执行

```cpp
#include "ll/api/thread/ServerThreadExecutor.h"

void runOnServerThread() {
    auto& executor = ll::thread::ServerThreadExecutor::getDefault();
    
    executor.execute([] {
        // 在服务器主线程中运行
        // 在此处访问游戏状态是安全的
    });
}
```

### 延迟执行

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"
#include <chrono>

void scheduleTask() {
    auto& executor = ll::thread::ThreadPoolExecutor::getDefault();
    
    auto callback = executor.executeAfter(
        [] {
            // 5 秒后运行
        },
        std::chrono::seconds(5)
    );
    
    // 可以取消回调
    // callback->cancel();
}
```

### 自定义线程池

```cpp
#include "ll/api/thread/ThreadPoolExecutor.h"

void createCustomPool() {
    ll::thread::ThreadPoolExecutor myPool("MyPool", 4);  // 4 个线程
    
    myPool.execute([] {
        // 工作
    });
    
    myPool.resize(8);  // 调整为 8 个线程
}
```

## 相关模块

- [Coroutine（协程）](coro.zh.md) — 协程使用执行器
- [Chrono（游戏时间）](chrono.zh.md) — 延迟执行的时长类型
