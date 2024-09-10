#include "ll/core/LeviLamina.h"

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/thread/InplaceExecutor.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/thread/ThreadPoolExecutor.h"

using namespace ll;
using namespace coro;

using namespace literals;

CoroTask<int> val1() {
    co_await 0.5s;
    co_return 10;
}
CoroTask<float> val2() {
    co_await 0.5s;
    co_return 20;
}

CoroTask<Expected<int>> coroutine() {
    for (size_t i = 0;; i++) {
        getLogger().info(
            "coroutine: {}, thread: {}",
            chrono::GameTickClock::now().time_since_epoch(),
            std::this_thread::get_id()
        );
        co_await 2_tick;
        if (i > 10) {
            break;
            // throw std::runtime_error("test coroutine");
        }
    }
    auto parbegin = std::chrono::steady_clock::now();
    auto [v1, v2, _] = co_await collectAll(val1(), val2(), val2());
    getLogger().info(
        "coroutine: collectAll use {}",
        std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - parbegin),
        std::this_thread::get_id()
    );
    parbegin = std::chrono::steady_clock::now();
    std::vector<ll::coro::CoroTask<int>> tasks{};
    tasks.emplace_back(val1());
    tasks.emplace_back(val1());
    tasks.emplace_back(val1());
    tasks.emplace_back(val1());
    auto vec = co_await collectAll(std::move(tasks));
    getLogger().info(
        "coroutine: collectAll use {}",
        std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - parbegin),
        std::this_thread::get_id()
    );
    co_return v1.value() + v2.value() + vec[0].value() + vec[1].value();
}
static bool run = [] {
    using namespace ll;

    thread::ServerThreadExecutor::getDefault().addTask([&] {
        auto val = coroutine().syncLaunch(thread::ThreadPoolExecutor::getDefault());
        getLogger().info("coroutine done, {}", val.value());
    });

    return true;
}();
