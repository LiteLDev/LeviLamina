#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"
#include "mc/platform/threading/Mutex.h"

namespace Bedrock::Threading {

class EnableFIFOQueueForMainThread : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // EnableFIFOQueueForMainThread inner types define
    using Task = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::std::function<void()>>> mQueue;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>           mQueueMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableFIFOQueueForMainThread() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _runNextTask();

    MCAPI_C void queueForMainThreadFIFO(::std::function<void()>&& task);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
