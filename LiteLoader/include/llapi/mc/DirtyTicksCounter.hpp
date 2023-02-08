/**
 * @file  DirtyTicksCounter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1134782620
     * @symbol  ??0DirtyTicksCounter\@\@QEAA\@XZ
     */
    MCAPI DirtyTicksCounter();
    /**
     * @hash   -501480104
     * @symbol  ?getTicksSinceLastChange\@DirtyTicksCounter\@\@QEBAHXZ
     */
    MCAPI int getTicksSinceLastChange() const;
    /**
     * @hash   1059937322
     * @symbol  ?getTotalDirtyTicks\@DirtyTicksCounter\@\@QEBAHXZ
     */
    MCAPI int getTotalDirtyTicks() const;
    /**
     * @hash   -1461662161
     * @symbol  ??EDirtyTicksCounter\@\@QEAAAEAU0\@XZ
     */
    MCAPI struct DirtyTicksCounter & operator++();
    /**
     * @hash   -2094093741
     * @symbol  ?reset\@DirtyTicksCounter\@\@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   -1500992957
     * @symbol  ?touch\@DirtyTicksCounter\@\@QEAAXXZ
     */
    MCAPI void touch();
    /**
     * @hash   -2016706235
     * @symbol  ?max\@DirtyTicksCounter\@\@SA?AU1\@XZ
     */
    MCAPI static struct DirtyTicksCounter max();

};