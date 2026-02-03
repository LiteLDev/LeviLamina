#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/InstancedThreadLocalValue.h"
#include "mc/deps/core/threading/SharedRecursiveMutexBase.h"

namespace Bedrock::Threading {

class SharedRecursiveMutex : public ::Bedrock::Threading::SharedRecursiveMutexBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Bedrock::Threading::InstancedThreadLocalValue<uint>> mSharedRecursionCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool _threadHoldsSharedLock(::std::thread::id) /*override*/;

    virtual bool _shouldLockForSharedAccess(::std::thread::id) /*override*/;

    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) /*override*/;

    virtual ~SharedRecursiveMutex() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_threadHoldsSharedLock(::std::thread::id);

    MCAPI bool $_shouldLockForSharedAccess(::std::thread::id);

    MCAPI bool $_shouldUnLockForSharedAccess(::std::thread::id);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
