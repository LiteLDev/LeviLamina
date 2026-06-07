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
MCNAPI bool IS_RUNNING_STATICS();

MCNAPI ::std::error_code MakeErrorCode(::Bedrock::Threading::AsyncErrc id);

MCNAPI ::gsl::not_null<::WorkerPool*> getDefaultWorkerPool();

MCNAPI ::Bedrock::Threading::AssignedThread& getMainThread();

MCNAPI ::gsl::not_null<::Scheduler*> getMainThreadScheduler();

MCNAPI ::gsl::not_null<::WorkerPool*> getNetworkWorkerPool();

MCNAPI ::Bedrock::Threading::AssignedThread& getServerThread();
// NOLINTEND

} // namespace Bedrock::Threading
