/**
 * @file  ScopedAutoreleasePool.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ScopedAutoreleasePool();
    /**
     * @symbol  ?drain\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drain();
    /**
     * @symbol  ?drainNow\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void drainNow();
    /**
     * @symbol  ?reset\@ScopedAutoreleasePool\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol  ??1ScopedAutoreleasePool\@\@QEAA\@XZ
     */
    MCAPI ~ScopedAutoreleasePool();

};