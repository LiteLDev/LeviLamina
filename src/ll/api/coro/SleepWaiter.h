#pragma once

#include <coroutine>

#include "ll/api/thread/TaskExecuter.h"

namespace ll::coro {
class SleepWaiter {
    using Duration = thread::TaskExecuter::Duration;

    thread::TaskExecuter& exec;
    Duration              dur;

public:
    template <class R, class P>
    SleepWaiter(thread::TaskExecuter& exec, std::chrono::duration<R, P> dur)
    : exec(exec),
      dur(std::chrono::duration_cast<Duration>(dur)) {}

    template <class C, class D>
    SleepWaiter(thread::TaskExecuter& exec, std::chrono::time_point<C, D> time) : SleepWaiter(exec, time - C::now()) {}

    bool await_ready() const noexcept { return false; }
    void await_suspend(std::coroutine_handle<> handle) { exec.addTaskAfter(handle, dur); }
    void await_resume() const noexcept {}
};
} // namespace ll::coro
