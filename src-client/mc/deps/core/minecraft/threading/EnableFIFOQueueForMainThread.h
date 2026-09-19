#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

namespace Bedrock::Threading {

class EnableFIFOQueueForMainThread : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // EnableFIFOQueueForMainThread inner types define
    using Task = ::std::function<void()>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::deque<::std::function<void()>>> mQueue;
    ::ll::TypedStorage<8, 80, ::std::mutex>                          mQueueMutex;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableFIFOQueueForMainThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableFIFOQueueForMainThread() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnableFIFOQueueForMainThread(::std::string name);

    MCAPI void queueForMainThreadFIFO(::std::function<void()>&& task);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);
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
