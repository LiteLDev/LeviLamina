#pragma once
#include <windows.h>

// ===== Critical Section Locker =====
// a simple lock which is much faster than std::mutex

class CsLock
{
    CRITICAL_SECTION cslock;

public:
    CsLock();
    ~CsLock();
    bool lock();
    bool unlock();
};