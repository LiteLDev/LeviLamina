#pragma once

#include "ll/api/thread/Executor.h"

#include "mc/common/wrapper/optional_ref.h"

namespace ll::coro {

using thread::Executor;

using ExecutorRef = optional_ref<Executor const>;

using NonNullExecutorRef = Executor const&;

using Duration = Executor::Duration;

constexpr inline struct CurrentExecutor {
} currentExecutor;

} // namespace ll::coro
