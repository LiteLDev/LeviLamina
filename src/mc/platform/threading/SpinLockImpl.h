#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLockImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::std::hash<::std::thread::id>> mThreadHasher;
    ::ll::TypedStorage<8, 8, uint64 const>                   mNoThreadId;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>>          mOwnerThread;
    ::ll::TypedStorage<4, 4, uint>                           mOwnerRefCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void lock();

    MCAPI_C void unlock();
    // NOLINTEND
};
