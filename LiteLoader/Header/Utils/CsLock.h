#pragma once
#include <windows.h>
#ifdef LITELOADER_EXPORTS
#define LIAPI __declspec(dllexport)
#else
#define LIAPI __declspec(dllimport)
#endif
// ===== Critical Section Locker =====
// a simple lock which is much faster than std::mutex

class CsLock
{
    bool inited = false;
    CRITICAL_SECTION cslock;
public:
    LIAPI CsLock();
    LIAPI ~CsLock();
    LIAPI bool lock();
    LIAPI bool unlock();
};

class CsLockHolder
{
    CsLock lock;
public:
    LIAPI CsLockHolder() { lock.lock(); }
    LIAPI ~CsLockHolder() { lock.unlock(); }
};