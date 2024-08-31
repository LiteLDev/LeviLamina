#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/thread/TaskPool.h"

namespace ll::thread {
class TickSyncTaskPool : public TaskPool {
    struct Impl;
    std::unique_ptr<Impl> impl;

protected:
    LLAPI void addTaskImpl(std::function<void()> f) override;

public:
    LLAPI TickSyncTaskPool();

    LLAPI ~TickSyncTaskPool() override;

    LLNDAPI static std::shared_ptr<TickSyncTaskPool> const& getDefault();
};
} // namespace ll::thread
