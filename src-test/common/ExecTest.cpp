#include "ll/core/LeviLamina.h"

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

using namespace ll;
using namespace coro;

using namespace literals;

CoroTask<Expected<int>> coroutine() {
    for (size_t i = 0;; i++) {
        getLogger().info(
            "coroutine: {}, thread: {}",
            chrono::GameTickClock::now().time_since_epoch(),
            std::this_thread::get_id()
        );
        co_await 2_tick;

        // co_await yield;

        if (i > 10) {
            break;
            // throw std::runtime_error("test coroutine");
        }
    }
    co_return 1234567;
}


static bool run = [] {
    using namespace ll;

    thread::ThreadPoolExecutor::getDefault().addTask([&] {
        auto val = coroutine().syncLaunch(thread::ServerThreadExecutor::getDefault());
        getLogger().info("coroutine done, {}", val.value());
    });

    return true;
}();
