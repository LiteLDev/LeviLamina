/**
 * @file  DirtyTicksCounter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure DirtyTicksCounter.
 *
 */
struct DirtyTicksCounter {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIRTYTICKSCOUNTER
public:
    struct DirtyTicksCounter& operator=(struct DirtyTicksCounter const &) = delete;
    DirtyTicksCounter(struct DirtyTicksCounter const &) = delete;
#endif

public:
    /**
     * @symbol  ??0DirtyTicksCounter\@\@QEAA\@XZ
     */
    MCAPI DirtyTicksCounter();
    /**
     * @symbol  ?getTicksSinceLastChange\@DirtyTicksCounter\@\@QEBAHXZ
     */
    MCAPI int getTicksSinceLastChange() const;
    /**
     * @symbol  ?getTotalDirtyTicks\@DirtyTicksCounter\@\@QEBAHXZ
     */
    MCAPI int getTotalDirtyTicks() const;
    /**
     * @symbol  ??EDirtyTicksCounter\@\@QEAAAEAU0\@XZ
     */
    MCAPI struct DirtyTicksCounter & operator++();
    /**
     * @symbol  ?reset\@DirtyTicksCounter\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @symbol  ?touch\@DirtyTicksCounter\@\@QEAAXXZ
     */
    MCAPI void touch();
    /**
     * @symbol  ?max\@DirtyTicksCounter\@\@SA?AU1\@XZ
     */
    MCAPI static struct DirtyTicksCounter max();

};