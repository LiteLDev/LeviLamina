#pragma once

#include <coroutine>

#include "ll/api/coro/Executor.h"

namespace ll::coro {
class InterruptableSleep {
    std::shared_ptr<data::CancellableCallback> sleeped;
    ExecutorRef                                exec;

    class DurAwaiter {
        InterruptableSleep& self;
        Duration            dur;

    public:
        template <class R, class P>
        constexpr DurAwaiter(std::chrono::duration<R, P> dur, InterruptableSleep& s)
        : self(s),
          dur(std::chrono::duration_cast<Duration>(dur)) {}
        template <class C, class D>
        constexpr DurAwaiter(std::chrono::time_point<C, D> time, InterruptableSleep& s)
        : SleepAwaiter(time - C::now(), s) {}
        constexpr void setExecutor(ExecutorRef ex) { self.exec = ex; }
        constexpr bool await_ready() const noexcept { return dur <= Duration{0}; }
        void await_suspend(std::coroutine_handle<> handle) { self.sleeped = self.exec->executeAfter(handle, dur); }
        constexpr void await_resume() const noexcept {}
    };

    class EtnAwaiter {
        InterruptableSleep& self;

    public:
        constexpr EtnAwaiter(InterruptableSleep& s) : self(s) {}
        constexpr void setExecutor(ExecutorRef ex) { self.exec = ex; }
        constexpr bool await_ready() const noexcept { return false; }
        void           await_suspend(std::coroutine_handle<> handle) {
            self.sleeped = std::make_shared<data::CancellableCallback>(handle);
        }
        constexpr void await_resume() const noexcept {}
    };

public:
    InterruptableSleep(InterruptableSleep const&)            = delete;
    InterruptableSleep& operator=(InterruptableSleep const&) = delete;

    InterruptableSleep()  = default;
    ~InterruptableSleep() = default;

    template <class R, class P>
    DurAwaiter sleepFor(std::chrono::duration<R, P> duration) {
        return {duration, *this};
    }

    template <class C, class D>
    DurAwaiter sleepUntil(std::chrono::time_point<C, D> time) {
        return {time, *this};
    }

    EtnAwaiter sleep() { return {*this}; }

    bool interrupt(bool inplace = false) {
        if (auto ptr = std::move(sleeped)) {
            if (inplace) {
                return ptr->call();
            } else {
                return ptr->moveTo([&](auto&& f) {
                    exec->execute(std::move(f));
                    return true;
                });
            }
        }
        return false;
    }
};
} // namespace ll::coro
