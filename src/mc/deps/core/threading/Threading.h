#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncErrc.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Bedrock::Threading { class AssignedThread; }
// clang-format on

namespace Bedrock::Threading {
// functions
// NOLINTBEGIN
MCAPI bool IS_RUNNING_STATICS();

MCAPI ::std::error_code MakeErrorCode(::Bedrock::Threading::AsyncErrc id);

MCAPI ::gsl::not_null<::WorkerPool*> getDefaultWorkerPool();

MCAPI ::Bedrock::Threading::AssignedThread& getMainThread();

MCAPI ::gsl::not_null<::Scheduler*> getMainThreadScheduler();

MCAPI ::gsl::not_null<::WorkerPool*> getNetworkWorkerPool();

MCAPI ::Bedrock::Threading::AssignedThread& getServerThread();
// NOLINTEND

} // namespace Bedrock::Threading
