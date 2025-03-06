# 协程指南

从LeviLamina 1.0.0开始，协程替代了Scheduler。

## 用法

1. 引用头文件
   ```cpp
   #include "ll/api/chrono/GameChrono.h"
   #include "ll/api/coro/CoroTask.h"
   ```
2. 在函数中调用`ll::coro::keepThis`，传入返回值为`ll::coro::CoroTask`的lambda函数
3. 在`keepThis`后调用`launch`或`syncLaunch`方法，后者会阻塞服务器线程，传入`Executor`类，比如
   `ll::thread::ServerThreadExecutor`

!!! tip "可用的Executor"
    `ll::thread::ServerThreadExecutor`(ll/api/thread/ServerThreadExecutor.h): 服务器线程
    `ll::thread::ThreadPoolExecutor`(ll/api/thread/ThreadPoolExecutor.h): 线程池  
    更多Executor请参见`ll/api/thread/`

## 示例

### ServerThreadExecutor

以下函数使用协程实现了在服务器线程每20 tick输出字符串到控制台1次，共计20次。

```cpp
#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ServerThreadExecutor.h"

void createServerThreadCoro() {
    using namespace ll::chrono_literals;
    ll::coro::keepThis([]() -> ll::coro::CoroTask<> {
        co_await 20_tick;
        static int i = 0;
        while (i < 20) {
            std::cout << "This is coro in server thread\n";
            ++i;
        }
        co_return;
    }).launch(ll::thread::ServerThreadExecutor::getDefault());
}
```

### ThreadPoolExecutor

以下函数使用协程实现了在线程池中每秒输出字符串到控制台1次，共计20次。

```cpp
#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

void createServerThreadCoro() {
    using namespace ll::chrono_literals;
    ll::coro::keepThis([]() -> ll::coro::CoroTask<> {
        co_await 1s;
        static int i = 0;
        while (i < 20) {
            std::cout << "This is coro in server thread\n";
            ++i;
        }
        co_return;
    }).launch(ll::thread::ThreadPoolExecutor::getDefault());
}
```