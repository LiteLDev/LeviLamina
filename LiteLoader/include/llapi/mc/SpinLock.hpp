/**
 * @file  MC/SpinLock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -798280663
     * @symbol ??0SpinLock@@QEAA@XZ
     */
    MCAPI SpinLock();
    /**
     * @hash   829063525
     * @symbol ?lock@SpinLock@@QEAAXXZ
     */
    MCAPI void lock();
    /**
     * @hash   -2021240590
     * @symbol ?try_lock@SpinLock@@QEAA_NXZ
     */
    MCAPI bool try_lock();
    /**
     * @hash   -1354902315
     * @symbol ?unlock@SpinLock@@QEAAXXZ
     */
    MCAPI void unlock();
    /**
     * @hash   1269240151
     * @symbol ??1SpinLock@@QEAA@XZ
     */
    MCAPI ~SpinLock();

//private:
    /**
     * @hash   -1104311331
     * @symbol ?_getThreadId@SpinLock@@AEAA_KXZ
     */
    MCAPI unsigned __int64 _getThreadId();

private:

};