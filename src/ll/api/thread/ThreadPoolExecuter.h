#pragma once

#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {
class ThreadPoolExecuter : public TaskExecuter {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI explicit ThreadPoolExecuter(std::string_view name, size_t nThreads = 1);

    LLAPI ~ThreadPoolExecuter() override;

    LLAPI void resize(size_t nThreads = 1);
    LLAPI void destroy();

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI SchId addTaskAfter(std::function<void()>, Duration) const override;

    LLAPI bool removeFromSch(SchId) const override;

    LLNDAPI static ThreadPoolExecuter const& getDefault();
};
} // namespace ll::thread
