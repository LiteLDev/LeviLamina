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
     * @hash   -37799079
     * @symbol  ??0SpinLock\@\@QEAA\@XZ
     */
    MCAPI SpinLock();
    /**
     * @hash   1589545109
     * @symbol  ?lock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @hash   -1260759006
     * @symbol  ?try_lock\@SpinLock\@\@QEAA_NXZ
     */
    MCAPI bool try_lock();
    /**
     * @hash   -594420731
     * @symbol  ?unlock\@SpinLock\@\@QEAAXXZ
     */
    MCAPI void unlock();
    /**
     * @hash   1361127127
     * @symbol  ??1SpinLock\@\@QEAA\@XZ
     */
    MCAPI ~SpinLock();

//private:
    /**
     * @hash   -341138947
     * @symbol  ?_getThreadId\@SpinLock\@\@AEAA_KXZ
     */
    MCAPI unsigned __int64 _getThreadId();

private:

};