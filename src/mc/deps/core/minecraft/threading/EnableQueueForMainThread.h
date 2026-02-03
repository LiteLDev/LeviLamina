#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/EnableQueueForThread.h"

// auto generated forward declare list
// clang-format off
class Scheduler;
class WorkerPool;
// clang-format on

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForMainThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableQueueForMainThread() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnableQueueForMainThread(::std::string name);

    MCAPI EnableQueueForMainThread(::WorkerPool&, ::Scheduler&, ::std::string);

    MCAPI_C ::Bedrock::Threading::Async<void> queueForMainThread(::std::function<void()>&& callback);

    MCAPI_C ::Bedrock::Threading::Async<void> queueForMainThreadAutoRequeue(::std::function<bool()>&& callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);

    MCAPI void* $ctor(::WorkerPool&, ::Scheduler&, ::std::string);
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
