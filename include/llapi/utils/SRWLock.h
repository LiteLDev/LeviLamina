#pragma once
#include "llapi/Global.h"
#include <synchapi.h>

class SRWLock {
    bool inited = false;
    SRWLOCK srwlock{};

public:
    LIAPI SRWLock();
    LIAPI void lock();
    LIAPI bool try_lock();
    LIAPI void unlock();
    LIAPI void lock_shared();
    LIAPI bool try_lock_shared();
    LIAPI void unlock_shared();
};

class SRWLockHolder {
    SRWLock& locker;

public:
    inline SRWLockHolder(SRWLock& lock)
    : locker(lock) {
        locker.lock();
    }
    inline ~SRWLockHolder() {
        locker.unlock();
    }
};


class SRWLockSharedHolder {
    SRWLock& locker;

public:
    inline SRWLockSharedHolder(SRWLock& lock)
    : locker(lock) {
        locker.lock_shared();
    }
    inline ~SRWLockSharedHolder() {
        locker.unlock_shared();
    }
};