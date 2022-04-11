#pragma once
#include "../Global.h"
#include <windows.h>

class SRWLock
{
    bool inited;
    SRWLOCK srwlock;

public:
    LIAPI SRWLock();
    LIAPI void lock();
    LIAPI bool try_lock();
    LIAPI void unlock();
    LIAPI void lock_shared();
    LIAPI bool try_lock_shared();
    LIAPI void unlock_shared();
};

class SRWLockHolder
{
    SRWLock &locker;
public:
    LIAPI SRWLockHolder(SRWLock &lock) :locker(lock) { locker.lock(); }
    LIAPI ~SRWLockHolder() { locker.unlock(); }
};



class SRWLockSharedHolder
{
    SRWLock &locker;
public:
    LIAPI SRWLockSharedHolder(SRWLock &lock) :locker(lock) { locker.lock_shared(); }
    LIAPI ~SRWLockSharedHolder() { locker.unlock_shared(); }
};