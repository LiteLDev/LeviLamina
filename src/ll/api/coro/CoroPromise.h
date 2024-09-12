#pragma once

#include <coroutine>

#include "ll/api/Expected.h"
#include "ll/api/base/Concepts.h"
#include "ll/api/coro/ForwardAwaiter.h"
#include "ll/api/coro/SleepWaiter.h"
#include "ll/api/coro/YieldAwaiter.h"

namespace ll::coro {

template <class T>
class CoroTask;

struct CoroPromiseBase {
    std::coroutine_handle<> handle;
    void*                   local{};
    ExecutorRef             exec{};

    constexpr CoroPromiseBase() noexcept = default;

    struct FinalAwaiter {
        constexpr bool await_ready() const noexcept { return false; }
        template <std::derived_from<CoroPromiseBase> P>
        constexpr auto await_suspend(std::coroutine_handle<P> h) noexcept {
            return h.promise().handle;
        }
        constexpr void await_resume() noexcept {}
    };
    constexpr std::suspend_always initial_suspend() noexcept { return {}; }
    constexpr FinalAwaiter        final_suspend() noexcept { return {}; }

    template <concepts::Awaitable T>
    constexpr decltype(auto) await_transform(T&& awaitable) {
        if constexpr (requires { awaitable.setExecutor(exec); }) {
            awaitable.setExecutor(exec);
        }
        return std::forward<T>(awaitable);
    }

    constexpr ForwardAwaiter<NonNullExecutorRef> await_transform(CurrentExecutor) { return {exec.value()}; }

    constexpr YieldAwaiter await_transform(Yield) { return {exec}; }

    template <class R, class P>
    constexpr SleepWaiter await_transform(std::chrono::duration<R, P> dur) {
        return {dur, exec};
    }
    template <class C, class D>
    constexpr SleepWaiter await_transform(std::chrono::time_point<C, D> time) {
        return {time, exec};
    }
};
template <class T>
struct CoroPromise : public CoroPromiseBase {
    using ExpectedResult = std::conditional_t<concepts::IsLeviExpected<T>, T, Expected<T>>;

    ExpectedResult result{};

    constexpr CoroPromise() noexcept = default;

    template <class V>
    void return_value(V&& value) noexcept(std::is_nothrow_constructible_v<T, V>)
        requires(std::is_constructible_v<T, V>)
    {
        if constexpr (std::is_same_v<T, ExpectedResult>) {
            result = std::forward<V>(value);
        } else {
            result.emplace(std::forward<V>(value));
        }
    }
    void unhandled_exception() noexcept { result = makeExceptionError(); }

    constexpr CoroTask<T> get_return_object() noexcept;
};
template <>
struct CoroPromise<void> : public CoroPromiseBase {
    using ExpectedResult = Expected<>;

    ExpectedResult result{std::in_place};

    constexpr CoroPromise() noexcept = default;

    void return_void() noexcept {}

    void unhandled_exception() noexcept { result = makeExceptionError(); }

    constexpr CoroTask<void> get_return_object() noexcept;
};
} // namespace ll::coro
