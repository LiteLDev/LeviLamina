#pragma once
#include "llapi/Global.h"
#include <minwinbase.h>

// ===== Critical Section Locker =====
// a simple lock which is much faster than std::mutex

class CsLock {
    bool inited = false;
    CRITICAL_SECTION cslock;

public:
    LIAPI CsLock();
    LIAPI ~CsLock();
    LIAPI bool tryLock();
    LIAPI bool lock();
    LIAPI bool unlock();
};

class CsLockHolder {
    CsLock& locker;

public:
    LIAPI CsLockHolder(CsLock& lock)
    : locker(lock) {
        locker.lock();
    }
    LIAPI ~CsLockHolder() {
        locker.unlock();
    }
};
