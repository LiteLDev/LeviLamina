#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class SharedRecursiveMutexBase : public ::std::shared_mutex {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<::std::thread::id>> mOwningThreadId;
    ::ll::TypedStorage<4, 4, uint>                             mExclusiveLockCount;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>            mSharedLockCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SharedRecursiveMutexBase() = default;

    virtual bool _threadHoldsSharedLock(::std::thread::id) = 0;

    virtual bool _shouldLockForSharedAccess(::std::thread::id) = 0;

    virtual bool _shouldUnLockForSharedAccess(::std::thread::id) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Threading
