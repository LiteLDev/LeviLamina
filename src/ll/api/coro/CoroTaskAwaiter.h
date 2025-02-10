#pragma once

#include "ll/api/coro/CoroPromise.h"

namespace ll::coro {
template <typename T>
struct CoroTaskAwaiter {
    using Handle = std::coroutine_handle<CoroPromise<T>>;

    using ExpectedResult = typename CoroPromise<T>::ExpectedResult;

    Handle handle;

    CoroTaskAwaiter(CoroTaskAwaiter const& other)            = delete;
    CoroTaskAwaiter& operator=(CoroTaskAwaiter const& other) = delete;

    constexpr CoroTaskAwaiter(CoroTaskAwaiter&& other) noexcept : handle(std::exchange(other.handle, nullptr)) {}

    constexpr CoroTaskAwaiter& operator=(CoroTaskAwaiter&& other) noexcept {
        std::swap(handle, other.handle);
        return *this;
    }

    constexpr CoroTaskAwaiter(Handle h) noexcept : handle(h) {}

    constexpr ~CoroTaskAwaiter() {
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
        promise.exec->execute(handle);
    }

    constexpr ExpectedResult getResult() noexcept {
        ExpectedResult ret = std::move(handle.promise().result());
        std::exchange(handle, nullptr).destroy();
        return ret;
    }
};
} // namespace ll::coro
