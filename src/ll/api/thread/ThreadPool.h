#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/thread/TaskPool.h"

namespace ll::thread {
class ThreadPool : public TaskPool {
    struct Impl;
    std::unique_ptr<Impl> impl;

protected:
    LLAPI void addTaskImpl(std::function<void()> f) override;

public:
    LLAPI explicit ThreadPool(size_t nThreads = 1);

    LLAPI ~ThreadPool() override;

    LLAPI void resize(size_t nThreads = 1);
    LLAPI void destroy();

    LLNDAPI static std::shared_ptr<ThreadPool> const& getDefault();
};
} // namespace ll::thread
