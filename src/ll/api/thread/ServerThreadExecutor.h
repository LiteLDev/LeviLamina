#pragma once

#include "ll/api/coro/Executor.h"

namespace ll::thread {
class ServerThreadExecutor final : public coro::Executor {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    LLAPI ServerThreadExecutor(std::string name, Duration maxOnceDuration, size_t checkPack);

    LLAPI ~ServerThreadExecutor() override;

    LLAPI void execute(std::function<void()>) const override;

    LLAPI std::shared_ptr<data::CancellableCallback> executeAfter(std::function<void()>, Duration) const override;

    LLNDAPI static ServerThreadExecutor const& getDefault();
};
} // namespace ll::thread
