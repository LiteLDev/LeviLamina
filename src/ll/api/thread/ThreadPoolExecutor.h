#pragma once

#include "ll/api/thread/TaskExecutor.h"

namespace ll::thread {
class ThreadPoolExecutor : public TaskExecutor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI explicit ThreadPoolExecutor(std::string_view name, size_t nThreads = 1);

    LLAPI ~ThreadPoolExecutor() override;

    LLAPI void resize(size_t nThreads = 1);
    LLAPI void destroy();

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI SchId addTaskAfter(std::function<void()>, Duration) const override;

    LLAPI bool removeFromSch(SchId) const override;

    LLNDAPI static ThreadPoolExecutor const& getDefault();
};
} // namespace ll::thread
