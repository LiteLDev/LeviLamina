#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {
public:
    // prevent constructor by default
    SpinLock& operator=(SpinLock const&);
    SpinLock(SpinLock const&);

public:
    // NOLINTBEGIN
    MCAPI SpinLock();

    MCAPI void lock();

    MCAPI bool try_lock();

    MCAPI void unlock();

    MCAPI ~SpinLock();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI uint64 _getThreadId();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
