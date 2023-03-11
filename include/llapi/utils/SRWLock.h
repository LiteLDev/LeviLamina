#pragma once
#include "llapi/Global.h"
#include <synchapi.h>

class SRWLock {
    bool inited = false;
    SRWLOCK srwlock{};

public:
    LLAPI SRWLock();
    LLAPI void lock();
    LLAPI bool try_lock();
    LLAPI void unlock();
    LLAPI void lock_shared();
    LLAPI bool try_lock_shared();
    LLAPI void unlock_shared();
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