#include <windows.h>
#include "llapi/utils/SRWLock.h"

SRWLock::SRWLock() {
    if (!inited) {
        inited = true;
        InitializeSRWLock(&srwlock);
    }
    inited = true;
}

void SRWLock::lock() {
    if (!inited) {
        inited = true;
        InitializeSRWLock(&srwlock);
    }
    AcquireSRWLockExclusive(&srwlock);
}

bool SRWLock::try_lock() {
    if (!inited) {
        inited = true;
        InitializeSRWLock(&srwlock);
    }
    return TryAcquireSRWLockExclusive(&srwlock);
}

void SRWLock::unlock() {
    ReleaseSRWLockExclusive(&srwlock);
}

void SRWLock::lock_shared() {
    if (!inited) {
        inited = true;
        InitializeSRWLock(&srwlock);
    }
    AcquireSRWLockShared(&srwlock);
}

bool SRWLock::try_lock_shared() {
    if (!inited) {
        inited = true;
        InitializeSRWLock(&srwlock);
    }
    return TryAcquireSRWLockShared(&srwlock);
}

void SRWLock::unlock_shared() {
    ReleaseSRWLockShared(&srwlock);
}
