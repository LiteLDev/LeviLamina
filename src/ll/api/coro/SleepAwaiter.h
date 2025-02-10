#pragma once

#include <coroutine>

#include "ll/api/coro/Executor.h"

namespace ll::coro {
class SleepAwaiter {
    ExecutorRef exec;
    Duration    dur;

public:
    template <class R, class P>
    constexpr SleepAwaiter(std::chrono::duration<R, P> dur, ExecutorRef exec = nullptr)
    : exec(exec),
      dur(std::chrono::duration_cast<Duration>(dur)) {}

    template <class C, class D>
    constexpr SleepAwaiter(std::chrono::time_point<C, D> time, ExecutorRef exec = nullptr)
    : SleepAwaiter(time - C::now(), exec) {}

    constexpr void setExecutor(ExecutorRef ex) { exec = ex; }

    constexpr bool await_ready() const noexcept { return dur <= Duration{0}; }
    void           await_suspend(std::coroutine_handle<> handle) { exec->executeAfter(handle, dur); }
    constexpr void await_resume() const noexcept {}
};
} // namespace ll::coro
