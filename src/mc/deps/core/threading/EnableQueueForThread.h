#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk30ed11;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableQueueForThread& operator=(EnableQueueForThread const&);
    EnableQueueForThread(EnableQueueForThread const&);
    EnableQueueForThread();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableQueueForThread();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnableQueueForThread(::WorkerPool& workerPool, ::Scheduler& scheduler, ::std::string name);

    MCAPI void flushThreadTasks();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(::std::function<void()>&& callback);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
