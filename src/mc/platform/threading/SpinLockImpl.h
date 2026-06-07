#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::std::hash<::std::thread::id>> mThreadHasher;
    ::ll::TypedStorage<4, 4, uint>                           mOwnerRefCount;
    ::ll::TypedStorage<8, 8, uint64 const>                   mNoThreadId;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>          mOwnerThread;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpinLockImpl();

    MCAPI void lock();

    MCAPI bool try_lock();

    MCAPI void unlock();

    MCAPI ~SpinLockImpl();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
