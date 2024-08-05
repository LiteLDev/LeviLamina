#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {
public:
    char unk[0x20];
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
};
