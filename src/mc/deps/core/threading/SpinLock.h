#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPINLOCK
public:
    SpinLock& operator=(SpinLock const&) = delete;
    SpinLock(SpinLock const&)            = delete;
#endif

public:
    /**
     * @symbol ??0SpinLock\@\@QEAA\@XZ
     */
    MCAPI SpinLock();
    /**
     * @symbol ?lock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @symbol ?try_lock\@SpinLock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock();
    /**
     * @symbol ?unlock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void unlock();
    /**
     * @symbol ??1SpinLock\@\@QEAA\@XZ
     */
    MCAPI ~SpinLock();

    // private:
    /**
     * @symbol ?_getThreadId\@SpinLock\@\@AEAA_KXZ
     */
    MCAPI unsigned __int64 _getThreadId();

private:
};
