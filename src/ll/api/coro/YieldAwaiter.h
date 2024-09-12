#pragma once

#include <coroutine>

#include "ll/api/coro/Executor.h"

namespace ll::coro {
constexpr inline struct Yield {
} yield;
class YieldAwaiter {
    ExecutorRef exec;

public:
    constexpr YieldAwaiter(ExecutorRef exec = nullptr) : exec(exec) {}

    constexpr void setExecutor(ExecutorRef ex) { exec = ex; }

    constexpr bool await_ready() const noexcept { return false; }
    void           await_suspend(std::coroutine_handle<> handle) { exec->execute(handle); }
    constexpr void await_resume() const noexcept {}
};
} // namespace ll::coro
