#pragma once

#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {
class ServerThreadExecuter : public TaskExecuter {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ServerThreadExecuter(std::string_view name, Duration maxOnceDuration, size_t checkPack);

    LLAPI ~ServerThreadExecuter() override;

    LLAPI void addTask(std::function<void()>) const override;

    LLAPI SchId addTaskAfter(std::function<void()>, Duration) const override;

    LLAPI bool removeFromSch(SchId) const override;

    LLNDAPI static ServerThreadExecuter const& getDefault();
};
} // namespace ll::thread
