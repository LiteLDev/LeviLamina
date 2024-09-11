#pragma once

#include "ll/api/thread/TaskExecutor.h"

namespace ll::thread {
class InplaceExecutor : public TaskExecutor {
public:
    LLAPI InplaceExecutor(std::string_view name);

    LLAPI ~InplaceExecutor() override;

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI
    std::shared_ptr<CancellableCallback> addTaskAfter(std::function<void()>, Duration) const override;

    LLNDAPI static InplaceExecutor const& getDefault();
};
} // namespace ll::thread
