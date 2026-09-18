#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const>          mNoThreadId;
    ::ll::TypedStorage<4, 4, uint>                  mOwnerRefCount;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mOwnerThread;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void lock();

    MCAPI void unlock();

    MCAPI ~SpinLockImpl();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
