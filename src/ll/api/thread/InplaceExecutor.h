#pragma once

#include "ll/api/thread/TaskExecutor.h"

namespace ll::thread {
class InplaceExecutor : public TaskExecutor {
public:
    LLAPI InplaceExecutor(std::string_view name);

    LLAPI ~InplaceExecutor() override;

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI SchId addTaskAfter(std::function<void()>, Duration) const override;

    LLAPI bool removeFromSch(SchId) const override;

    LLNDAPI static InplaceExecutor const& getDefault();
};
} // namespace ll::thread
