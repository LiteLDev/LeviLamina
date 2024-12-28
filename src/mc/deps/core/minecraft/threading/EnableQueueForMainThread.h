#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/EnableQueueForThread.h"
#include "mc/deps/core/threading/IAsyncResult.h"

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForMainThread& operator=(EnableQueueForMainThread const&);
    EnableQueueForMainThread(EnableQueueForMainThread const&);
    EnableQueueForMainThread();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableQueueForMainThread() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnableQueueForMainThread(::std::string name);

    MCAPI void flushMainThreadTasks();

    MCAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    queueForMainThread(::std::function<void()>&& callback);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
