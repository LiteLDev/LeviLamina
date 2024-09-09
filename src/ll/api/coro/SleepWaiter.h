#pragma once

#include <coroutine>

#include "ll/api/coro/Executor.h"

namespace ll::coro {
class SleepWaiter {

    ExecutorRef exec;
    Duration    dur;

public:
    template <class R, class P>
    constexpr SleepWaiter(std::chrono::duration<R, P> dur, ExecutorRef exec = nullptr)
    : exec(exec),
      dur(std::chrono::duration_cast<Duration>(dur)) {}

    template <class C, class D>
    constexpr SleepWaiter(std::chrono::time_point<C, D> time, ExecutorRef exec = nullptr)
    : SleepWaiter(time - C::now(), exec) {}

    constexpr void setExecutor(ExecutorRef ex) { exec = ex; }

    constexpr bool await_ready() const noexcept { return false; }
    void           await_suspend(std::coroutine_handle<> handle) { exec->addTaskAfter(handle, dur); }
    constexpr void await_resume() const noexcept {}
};
} // namespace ll::coro
