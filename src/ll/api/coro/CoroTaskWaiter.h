#pragma once

#include "ll/api/coro/CoroPromise.h"

namespace ll::coro {
template <typename T>
struct CoroTaskWaiter {
    using Handle = std::coroutine_handle<CoroPromise<T>>;

    using ExpectedT = typename CoroPromise<T>::ExpectedT;

    Handle handle;

    CoroTaskWaiter(CoroTaskWaiter const& other)            = delete;
    CoroTaskWaiter& operator=(CoroTaskWaiter const& other) = delete;

    constexpr CoroTaskWaiter(CoroTaskWaiter&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr CoroTaskWaiter& operator=(CoroTaskWaiter&& other) noexcept {
        std::swap(handle, other.handle);
        return *this;
    }

    constexpr CoroTaskWaiter(Handle h) noexcept : handle(h) {}

    constexpr ~CoroTaskWaiter() {
        if (handle) {
            std::exchange(handle, nullptr).destroy();
        }
    }
    constexpr bool await_ready() const noexcept { return false; }

    template <std::derived_from<CoroPromiseBase> P>
    void await_suspend(std::coroutine_handle<P> h) {
        auto& promise  = handle.promise();
        promise.handle = h;
        promise.local  = h.promise().local;
        promise.exec->addTask(handle);
    }

    constexpr ExpectedT getResult() noexcept {
        ExpectedT ret = std::move(handle.promise().result);
        std::exchange(handle, nullptr).destroy();
        return ret;
    }
};
} // namespace ll::coro
