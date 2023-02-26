/**
 * @file  SpinLock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpinLock.
 *
 */
class SpinLock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPINLOCK
public:
    class SpinLock& operator=(class SpinLock const &) = delete;
    SpinLock(class SpinLock const &) = delete;
#endif

public:
    /**
     * @symbol  ??0SpinLock\@\@QEAA\@XZ
     */
    MCAPI SpinLock();
    /**
     * @symbol  ?lock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @symbol  ?try_lock\@SpinLock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock();
    /**
     * @symbol  ?unlock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void unlock();
    /**
     * @symbol  ??1SpinLock\@\@QEAA\@XZ
     */
    MCAPI ~SpinLock();

//private:
    /**
     * @symbol  ?_getThreadId\@SpinLock\@\@AEAA_KXZ
     */
    MCAPI unsigned __int64 _getThreadId();

private:

};