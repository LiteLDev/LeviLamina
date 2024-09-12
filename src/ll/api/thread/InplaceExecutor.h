#pragma once

#include "ll/api/thread/Executor.h"

namespace ll::thread {
class InplaceExecutor : public Executor {
public:
    LLAPI InplaceExecutor(std::string_view name);

    LLAPI ~InplaceExecutor() override;

    LLAPI void execute(std::function<void()>) const override;

    LLAPI
    std::shared_ptr<CancellableCallback> executeAfter(std::function<void()>, Duration) const override;

    LLNDAPI static InplaceExecutor const& getDefault();
};
} // namespace ll::thread
