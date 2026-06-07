#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class TaskGroup;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mQueueForThreadTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableQueueForThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableQueueForThread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnableQueueForThread(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::string name);

    MCAPI void flushThreadTasks();

    MCAPI ::Bedrock::Threading::Async<void> queue(::std::function<void()>&& callback);

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<void> queueAutoRequeue(::std::function<bool()>&& callback);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::string name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
