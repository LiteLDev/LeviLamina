#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {
class ServerThreadExecuter : public TaskExecuter {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ServerThreadExecuter(Duration maxOnceDuration, size_t checkPack);

    LLAPI ~ServerThreadExecuter() override;

    LLAPI void addTask(std::function<void()>) override;

    LLAPI void addTaskAfter(std::function<void()>, Duration) override;

    LLNDAPI static ServerThreadExecuter& getDefault();
};
} // namespace ll::thread
