#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/EnableQueueForThread.h"

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
public:
    // prevent constructor by default
    EnableQueueForMainThread();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EnableQueueForMainThread(::std::string name);

    MCAPI void flushMainThreadTasks();

    MCAPI ::Bedrock::Threading::Async<void> queueForMainThread(::std::function<void()>&& callback);

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Threading::Async<void> queueForMainThreadAutoRequeue(::std::function<bool()>&& callback);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
