#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/minecraft/threading/EnableQueueForMainThread.h"

namespace Bedrock::Threading {

class EnableFIFOQueueForMainThread : public ::Bedrock::Threading::EnableQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk4d4d7c;
    ::ll::UntypedStorage<8, 80> mUnkb751e8;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableFIFOQueueForMainThread& operator=(EnableFIFOQueueForMainThread const&);
    EnableFIFOQueueForMainThread(EnableFIFOQueueForMainThread const&);
    EnableFIFOQueueForMainThread();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnableFIFOQueueForMainThread() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void _runNextTask();

    MCNAPI_C void queueForMainThreadFIFO(::std::function<void()>&& task);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
