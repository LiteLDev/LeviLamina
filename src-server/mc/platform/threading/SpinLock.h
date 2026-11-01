#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::atomic_flag&> m_lock;
    // NOLINTEND

public:
    // prevent constructor by default
    SpinLock& operator=(SpinLock const&);
    SpinLock(SpinLock const&);
    SpinLock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SpinLock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void Lock(::std::atomic_flag& flag);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
