#include <Utils/CsLock.h>

CsLock::CsLock() {
    InitializeCriticalSection(&cslock);
}

CsLock::~CsLock() {
    DeleteCriticalSection(&cslock);
}

bool CsLock::lock() {
    EnterCriticalSection(&cslock);
}

bool CsLock::unlock() {
    LeaveCriticalSection(&cslock);
}