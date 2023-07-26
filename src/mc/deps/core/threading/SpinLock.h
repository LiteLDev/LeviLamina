#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpinLock {

public:
    // prevent constructor by default
    SpinLock& operator=(SpinLock const&) = delete;
    SpinLock(SpinLock const&)            = delete;

public:
    /**
     * @symbol ??0SpinLock\@\@QEAA\@XZ
     */
    MCAPI SpinLock(); // NOLINT
    /**
     * @symbol ?lock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void lock(); // NOLINT
    /**
     * @symbol ?try_lock\@SpinLock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock(); // NOLINT
    /**
     * @symbol ?unlock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void unlock(); // NOLINT
    /**
     * @symbol ??1SpinLock\@\@QEAA\@XZ
     */
    MCAPI ~SpinLock(); // NOLINT

    // private:
    /**
     * @symbol ?_getThreadId\@SpinLock\@\@AEAA_KXZ
     */
    MCAPI unsigned __int64 _getThreadId(); // NOLINT

private:
};
