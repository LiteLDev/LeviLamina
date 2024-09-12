#pragma once

#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/data/CancellableCallback.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::coro {
class Executor : public std::enable_shared_from_this<Executor> {
    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    using Clock    = std::chrono::steady_clock;
    using Duration = Clock::duration;

    LLNDAPI Executor(std::string_view name);

    LLNDAPI std::string const& getName() const;

    LLAPI virtual ~Executor();

    virtual void execute(std::function<void()>) const = 0;

    virtual std::shared_ptr<data::CancellableCallback> executeAfter(std::function<void()>, Duration) const = 0;
};

using ExecutorRef = optional_ref<Executor const>;

using NonNullExecutorRef = Executor const&;

using Duration = Executor::Duration;

constexpr inline struct CurrentExecutor {
} currentExecutor;

} // namespace ll::coro
