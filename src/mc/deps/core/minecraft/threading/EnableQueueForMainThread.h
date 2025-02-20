#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/EnableQueueForThread.h"

namespace Bedrock::Threading {

class EnableQueueForMainThread : public ::Bedrock::Threading::EnableQueueForThread {
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
