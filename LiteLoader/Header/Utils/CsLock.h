#pragma once
#include <windows.h>

// ===== Critical Section Locker =====
// a simple lock which is much faster than std::mutex

class CsLock
{
    bool inited = false;
    CRITICAL_SECTION cslock;
public:
    CsLock();
    ~CsLock();
    bool lock();
    bool unlock();
};

class CsLockHolder
{
    CsLock lock;
public:
    CsLockHolder() { lock.lock(); }
    ~CsLockHolder() { lock.unlock(); }
};