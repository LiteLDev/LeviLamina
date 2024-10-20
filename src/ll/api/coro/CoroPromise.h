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

    constexpr YieldAwaiter await_transform(Yield const&) { return {exec}; }

    template <class R, class P>
    constexpr SleepWaiter await_transform(std::chrono::duration<R, P> const& dur) {
        return {dur, exec};
    }
    template <class C, class D>
    constexpr SleepWaiter await_transform(std::chrono::time_point<C, D> const& time) {
        return {time, exec};
    }
};
template <class T>
struct CoroPromise : public CoroPromiseBase {
    using ExpectedResult = std::conditional_t<concepts::IsLeviExpected<T>, T, Expected<T>>;

    std::optional<ExpectedResult> res{};

    constexpr CoroPromise() noexcept = default;

    template <class V>
    void return_value(V&& value) noexcept(std::is_nothrow_constructible_v<T, V>)
        requires(std::is_constructible_v<T, V>)
    {
        res.emplace(std::forward<V>(value));
    }
    void unhandled_exception() noexcept { res.emplace(makeExceptionError()); }

    constexpr CoroTask<T> get_return_object() noexcept;

    constexpr ExpectedResult& result() noexcept { return *res; }

    constexpr ExpectedResult const& result() const noexcept { return *res; }
};
template <>
struct CoroPromise<void> : public CoroPromiseBase {
    using ExpectedResult = Expected<>;

    ExpectedResult res{};

    constexpr CoroPromise() noexcept = default;

    void return_void() noexcept {}

    void unhandled_exception() noexcept { res = makeExceptionError(); }

    constexpr CoroTask<void> get_return_object() noexcept;

    constexpr ExpectedResult& result() noexcept { return res; }

    constexpr ExpectedResult const& result() const noexcept { return res; }
};
} // namespace ll::coro
