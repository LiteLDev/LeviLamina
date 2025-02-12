#include "ll/core/LeviLamina.h"

#include "ll/api/chrono/GameChrono.h"
#include "ll/api/coro/CallbackTransformer.h"
#include "ll/api/coro/CoroTask.h"
#include "ll/api/coro/Generator.h"
#include "ll/api/coro/InterruptableSleep.h"
#include "ll/api/thread/InplaceExecutor.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/thread/ThreadName.h"
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

Generator<size_t> generator(size_t n) {
    for (size_t i = 0; i < n; i++) {
        co_yield i;
    }
}

InterruptableSleep sleeper;

CoroTask<Expected<int>> coroutine() {
    std::thread{[] {
        std::this_thread::sleep_for(1s);
        sleeper.interrupt(true);
        getLogger().info("thread: {}", *thread::getThreadName());
    }}.detach();
    getLogger().info("coroutine: {}, thread: {}", std::chrono::system_clock::now(), *thread::getThreadName());
    co_await sleeper.sleep();
    getLogger().info("coroutine: {}, thread: {}", std::chrono::system_clock::now(), *thread::getThreadName());
    for (size_t i = 0;; i++) {
        co_await 2_tick;
        getLogger().info("coroutine: {}, thread: {}", std::chrono::system_clock::now(), *thread::getThreadName());
        if (i > 10) {
            break;
        }
    }
    auto t = co_await val1().tryGet();
    getLogger().info("c {}", *t);
    auto parbegin    = std::chrono::steady_clock::now();
    auto [v1, v2, _] = co_await collectAll(val1(), val2(), val2());
    getLogger().info(
        "coroutine: collectAll use {}",
        std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - parbegin),
        *thread::getThreadName()
    );
    std::vector<ll::coro::CoroTask<int>> tasks{};
    parbegin = std::chrono::steady_clock::now();
    for (auto&& i : generator(1000000)) {
        (void)i;
        tasks.emplace_back(val1());
    }
    getLogger().info(
        "coroutine: generator use {}",
        std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - parbegin),
        *thread::getThreadName()
    );
    auto vec = co_await collectAll(std::move(tasks));
    getLogger().info(
        "coroutine: collectAll use {}",
        std::chrono::duration_cast<std::chrono::duration<double>>(std::chrono::steady_clock::now() - parbegin),
        *thread::getThreadName()
    );
    co_return v1.value() + v2.value() + vec[0].value() + vec[1].value();
}
static bool run = [] {
    using namespace ll;

    thread::ServerThreadExecutor::getDefault().execute([&] {
        coroutine().launch(thread::ThreadPoolExecutor::getDefault(), [](Expected<int>&& val) {
            getLogger().info("coroutine done, {}", val.value());
        });

        auto f = []() -> CoroTask<> {
            CallbackTransformer<int> t;
            std::thread{[&] {
                auto setter   = t.getValueSetter();
                auto callback = [&](int i) {
                    setter.emplace(i);
                    return !setter.finished();
                };
                getLogger().info("start callback");
                for (int i = 0; i < 20; ++i) {
                    getLogger().info("callback {}", i);
                    if (!callback(i)) {
                        break;
                    }
                }
            }}.detach();
            int a = 0;
            for (auto iter = co_await t.begin(); iter != t.end(); co_await ++iter) {
                auto&& val = *iter;
                if (val > 10) {
                    break;
                }
                a++;
                getLogger().info("val {}, thread {}", val, *thread::getThreadName());
            }
            getLogger().info("breaked {}", a);
            co_await 0.1s;
        };
        keepThis(std::move(f)).syncLaunch(thread::ThreadPoolExecutor::getDefault());

        CallbackTransformer<int> t;

        auto f2 = [&t]() -> CoroTask<> {
            for (auto iter = co_await t.begin(); iter != t.end(); co_await ++iter) {
                auto&& val = *iter;

                if (val > 10) {
                    break;
                }
                getLogger().info("val {}, thread {}", val, *thread::getThreadName());
            }
            getLogger().info("breaked");
        };
        f2().launch(thread::InplaceExecutor::getDefault());

        auto callback = [v = t.getValueSetter()](int i) {
            v.emplace(i);
            return !v.finished();
        };
        getLogger().info("start callback");
        for (int i = 0; i < 7; ++i) {
            getLogger().info("callback {}", i);
            if (!callback(i)) {
                break;
            }
        }
    });

    return true;
}();
