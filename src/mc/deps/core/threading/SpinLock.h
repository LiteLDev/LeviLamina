#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {

public:
    // prevent constructor by default
    SpinLock& operator=(SpinLock const&) = delete;
    SpinLock(SpinLock const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getThreadId\@SpinLock\@\@AEAA_KXZ
     */
    MCAPI uint64_t _getThreadId();
    // NOLINTEND
};
