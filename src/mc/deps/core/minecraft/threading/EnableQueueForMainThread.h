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
    MCNAPI explicit EnableQueueForMainThread(::std::string name);

    MCNAPI EnableQueueForMainThread(::WorkerPool&, ::Scheduler&, ::std::string);

    MCNAPI_C ::Bedrock::Threading::Async<void> queueForMainThread(::std::function<void()>&& callback);

    MCNAPI_C ::Bedrock::Threading::Async<void> queueForMainThreadAutoRequeue(::std::function<bool()>&& callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name);

    MCNAPI void* $ctor(::WorkerPool&, ::Scheduler&, ::std::string);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
