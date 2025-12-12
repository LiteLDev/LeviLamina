#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

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
    virtual ~EnableQueueForThread() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> queue(::std::function<void()>&& callback);

    MCNAPI_C ::Bedrock::Threading::Async<void> queueAutoRequeue(::std::function<bool()>&& callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
