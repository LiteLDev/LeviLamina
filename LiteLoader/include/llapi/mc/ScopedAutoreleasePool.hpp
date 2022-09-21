/**
 * @file  MC/ScopedAutoreleasePool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScopedAutoreleasePool.
 *
 */
class ScopedAutoreleasePool {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCOPEDAUTORELEASEPOOL
public:
    class ScopedAutoreleasePool& operator=(class ScopedAutoreleasePool const &) = delete;
    ScopedAutoreleasePool(class ScopedAutoreleasePool const &) = delete;
#endif

public:
    /**
     * @hash   -2023482320
     * @symbol ??0ScopedAutoreleasePool@@QEAA@XZ
     */
    MCAPI ScopedAutoreleasePool();
    /**
     * @hash   -2051354923
     * @symbol ?drain@ScopedAutoreleasePool@@QEAAXXZ
     */
    MCAPI void drain();
    /**
     * @hash   -1521638017
     * @symbol ?drainNow@ScopedAutoreleasePool@@QEAAXXZ
     */
    MCAPI void drainNow();
    /**
     * @hash   1920955907
     * @symbol ?reset@ScopedAutoreleasePool@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   1581986032
     * @symbol ??1ScopedAutoreleasePool@@QEAA@XZ
     */
    MCAPI ~ScopedAutoreleasePool();

};