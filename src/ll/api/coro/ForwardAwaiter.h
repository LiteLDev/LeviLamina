#pragma once

#include <coroutine>

namespace ll::coro {
template <typename T>
struct ForwardAwaiter {
    [[nodiscard]] constexpr ForwardAwaiter(T val) : t(std::move(val)) {}

    constexpr bool await_ready() const noexcept { return true; }
    constexpr void await_suspend(std::coroutine_handle<>) const noexcept {}
    constexpr T    await_resume() noexcept { return std::move(t); }

    T t;
};
template <>
struct ForwardAwaiter<void> {
    constexpr bool await_ready() const noexcept { return true; }
    constexpr void await_suspend(std::coroutine_handle<>) const noexcept {}
    constexpr void await_resume() const noexcept {}
};
} // namespace ll::coro
