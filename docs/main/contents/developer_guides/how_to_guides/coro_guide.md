# Coroutine Guide

Starting from LeviLamina 1.0.0, coroutines replace the Scheduler.

## Usage

1. Include the header files:
   ```cpp
   #include "ll/api/chrono/GameChrono.h"
   #include "ll/api/coro/CoroTask.h"
   ```
2. Call `ll::coro::keepThis` in a function, passing a lambda function that returns `ll::coro::CoroTask`.
3. Call the `launch` or `syncLaunch` method after `keepThis`, the latter will block server thread, passing an `Executor`
   class, such as `ll::thread::ServerThreadExecutor`.

!!! tip "Available Executors"
    `ll::thread::ServerThreadExecutor` (ll/api/thread/ServerThreadExecutor.h): Server thread
    `ll::thread::ThreadPoolExecutor` (ll/api/thread/ThreadPoolExecutor.h): Thread pool  
    For more Executors, refer to `ll/api/thread/`.

## Examples

### ServerThreadExecutor

The following function uses a coroutine to print a string to the console every 20 ticks on the server thread, for a total of 20 times.

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

The following function uses a coroutine to print a string to the console every second in the thread pool, for a total of 20 times.

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

