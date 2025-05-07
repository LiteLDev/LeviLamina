#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/IAsyncResult.h"

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
    virtual ~EnableQueueForThread() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> queue(::std::function<void()>&& callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
