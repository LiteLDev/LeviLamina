#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {
class ThreadPoolExecuter : public TaskExecuter {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI explicit ThreadPoolExecuter(size_t nThreads = 1);

    LLAPI ~ThreadPoolExecuter() override;

    LLAPI void resize(size_t nThreads = 1);
    LLAPI void destroy();

    LLAPI void addTask(std::function<void()> f) override;

    LLNDAPI static std::shared_ptr<ThreadPoolExecuter> const& getDefault();
};
} // namespace ll::thread
