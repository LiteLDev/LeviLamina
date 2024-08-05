#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/AsyncErrc.h"
#include "mc/deps/core/common/bedrock/AsyncStatus.h"
#include "mc/deps/core/common/bedrock/IAsyncResult.h"
#include "mc/deps/core/common/bedrock/WorkerTaskStats.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
namespace Bedrock::Threading { class AssignedThread; }
namespace Bedrock::Threading { class EnableQueueForThread; }
namespace Bedrock::Threading { class OSThreadPriority; }
namespace Bedrock::Threading { class SharedRecursiveMutexBase; }
namespace Bedrock::Threading::AsyncResult { class ToXAsyncBlock; }
struct XAsyncBlock;
struct XTaskQueueObject;
// clang-format on

namespace Bedrock::Threading {
// NOLINTBEGIN
MCAPI bool IS_RUNNING_STATICS();

MCAPI std::error_code MakeErrorCode(::Bedrock::Threading::AsyncErrc id);

MCAPI gsl::not_null<class WorkerPool*> getDefaultWorkerPool();

MCAPI class Bedrock::Threading::AssignedThread& getMainThread();

MCAPI gsl::not_null<class Scheduler*> getMainThreadScheduler();

MCAPI gsl::not_null<class WorkerPool*> getNetworkWorkerPool();

MCAPI class Bedrock::Threading::AssignedThread& getServerThread();
// NOLINTEND

}; // namespace Bedrock::Threading
