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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
