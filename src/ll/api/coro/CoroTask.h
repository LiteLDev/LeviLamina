#pragma once

#include <semaphore>

#include "ll/api/coro/CoroPromise.h"
#include "ll/api/coro/CoroTaskWaiter.h"

namespace ll::coro {

template <class T = void>
class CoroTask {
public:
    using promise_type = CoroPromise<T>;
    using Handle       = std::coroutine_handle<promise_type>;

    using ExpectedT = typename CoroPromise<T>::ExpectedT;

    friend promise_type;

private:
    Handle handle;

    constexpr explicit CoroTask(Handle h) noexcept : handle(h) {}

    using WaiterBase = CoroTaskWaiter<T>;

public:
    struct ExpectedAwaiter : public WaiterBase {
        constexpr ExpectedAwaiter(Handle h) : WaiterBase(h) {}
        constexpr ExpectedT await_resume() noexcept { return WaiterBase::getResult(); };
    };

    struct ValueAwaiter : public WaiterBase {
        constexpr ValueAwaiter(Handle h) : WaiterBase(h) {}
        constexpr T await_resume() {
            if constexpr (std::is_same_v<T, ExpectedT>) {
                return WaiterBase::getResult();
            } else {
                return WaiterBase::getResult().value();
            }
        }
    };

    CoroTask(CoroTask const&)            = delete;
    CoroTask& operator=(CoroTask const&) = delete;

    CoroTask(CoroTask&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr CoroTask& operator=(CoroTask&& other) noexcept {
        std::swap(handle, other.handle);
        return *this;
    }

    constexpr ~CoroTask() {
        if (handle) {
            std::exchange(handle, nullptr).destroy();
        }
    };

    constexpr void setExecutor(ExecutorRef ex) { handle.promise().exec = ex; }

    constexpr ExecutorRef getExecutor() { return handle.promise().exec; }

    bool done() const { return !handle || handle.done(); }

    auto operator co_await() { return ValueAwaiter(std::exchange(handle, nullptr)); }

    auto tryGet() { return ExpectedAwaiter(std::exchange(handle, nullptr)); }

    template <class F = decltype([](auto&&) {})>
    void launch(Executor const& executor, F&& callback = {})
        requires(std::is_invocable_v<F, ExpectedT>)
    {
        setExecutor(executor);
        struct Launcher {
            struct promise_type : public CoroPromiseBase {
                constexpr std::suspend_never initial_suspend() noexcept { return {}; }
                constexpr std::suspend_never final_suspend() noexcept { return {}; }
                constexpr void               return_void() noexcept {}
                constexpr void               unhandled_exception() { std::rethrow_exception(std::current_exception()); }
                constexpr Launcher           get_return_object() noexcept { return {}; }
            };
        };
        [](CoroTask lazy, std::decay_t<F> cb) -> Launcher {
            cb(co_await lazy.tryGet());
        }(std::move(*this), std::forward<F>(callback));
    }

    ExpectedT syncLaunch(Executor const& executor) noexcept {
        ExpectedT value;
        try {
            std::binary_semaphore cond{0};
            launch(executor, [&](ExpectedT&& result) {
                value = std::move(result);
                cond.release();
            });
            cond.acquire();
        } catch (...) {
            value = makeExceptionError();
        }
        return value;
    }
};

template <class T>
constexpr CoroTask<T> CoroPromise<T>::get_return_object() noexcept {
    return CoroTask<T>(CoroTask<T>::Handle::from_promise(*this));
}
constexpr CoroTask<void> CoroPromise<void>::get_return_object() noexcept {
    return CoroTask<void>(CoroTask<void>::Handle::from_promise(*this));
}
} // namespace ll::coro
