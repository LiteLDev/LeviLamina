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
class Executor {
    std::string name;

public:
    using Clock    = std::chrono::steady_clock;
    using Duration = Clock::duration;

    Executor(std::string name) : name(std::move(name)) {}

    std::string const& getName() const { return name; }

    virtual ~Executor() = default;

    virtual void execute(std::function<void()>) const = 0;

    virtual std::shared_ptr<data::CancellableCallback> executeAfter(std::function<void()>, Duration) const = 0;
};

using ExecutorRef = optional_ref<Executor const>;

using NonNullExecutorRef = Executor const&;

using Duration = Executor::Duration;

constexpr inline struct CurrentExecutor {
} currentExecutor;

} // namespace ll::coro
