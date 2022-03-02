#include <Utils/CsLock.h>

CsLock::CsLock() {
    if (!inited) {
        inited = true;
        InitializeCriticalSection(&cslock);
    }
}

CsLock::~CsLock() {
    if (inited)
        DeleteCriticalSection(&cslock);
}

bool CsLock::tryLock()
{
    if (!inited) {
        inited = true;
        InitializeCriticalSection(&cslock);
    }
    return TryEnterCriticalSection(&cslock);
}

bool CsLock::lock() {
    if (!inited) {
        inited = true;
        InitializeCriticalSection(&cslock);
    }
    EnterCriticalSection(&cslock);
    return true;
}

bool CsLock::unlock() {
    LeaveCriticalSection(&cslock);
    return true;
}