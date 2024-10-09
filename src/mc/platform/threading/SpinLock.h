#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {
public:
    static constexpr uint const LOOP_LIMIT_BEFORE_YIELD = 3000;

    std::hash<std::thread::id> mThreadHasher;  // location=0x0
    size_t const               mNoThreadId;    // location=0x8
    std::atomic_size_t         mOwnerThread;   // location=0x10
    uint                       mOwnerRefCount; // location=0x18

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
