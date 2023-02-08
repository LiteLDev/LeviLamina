/**
 * @file  ScopedAutoreleasePool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1926859536
     * @symbol  ??0ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ScopedAutoreleasePool();
    /**
     * @hash   -1959467947
     * @symbol  ?drain\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drain();
    /**
     * @hash   -1429751041
     * @symbol  ?drainNow\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drainNow();
    /**
     * @hash   2012842883
     * @symbol  ?reset\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   1673873008
     * @symbol  ??1ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ~ScopedAutoreleasePool();

};