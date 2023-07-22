#pragma once
#include "liteloader/api/Global.h"
#include <minwinbase.h>

// ===== Critical Section Locker =====
// a simple lock which is much faster than std::mutex

class CsLock {
    bool inited = false;
    CRITICAL_SECTION cslock;

public:
    LLAPI CsLock();
    LLAPI ~CsLock();
    LLAPI bool tryLock();
    LLAPI bool lock();
    LLAPI bool unlock();
};

class CsLockHolder {
    CsLock& locker;

public:
    LLAPI CsLockHolder(CsLock& lock)
    : locker(lock) {
        locker.lock();
    }
    LLAPI ~CsLockHolder() {
        locker.unlock();
    }
};
