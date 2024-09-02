#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/thread/TaskExecuter.h"

namespace ll::thread {
class ServerThreadExecuter : public TaskExecuter {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ServerThreadExecuter();

    LLAPI ~ServerThreadExecuter() override;

    LLAPI void addTask(std::function<void()> f) override;

    LLNDAPI static std::shared_ptr<ServerThreadExecuter> const& getDefault();
};
} // namespace ll::thread
