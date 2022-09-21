/**
 * @file  MC/DirtyTicksCounter.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1825534044
     * @symbol ??0DirtyTicksCounter@@QEAA@XZ
     */
    MCAPI DirtyTicksCounter();
    /**
     * @hash   -1192231528
     * @symbol ?getTicksSinceLastChange@DirtyTicksCounter@@QEBAHXZ
     */
    MCAPI int getTicksSinceLastChange() const;
    /**
     * @hash   808924122
     * @symbol ?getTotalDirtyTicks@DirtyTicksCounter@@QEBAHXZ
     */
    MCAPI int getTotalDirtyTicks() const;
    /**
     * @hash   2142553711
     * @symbol ??EDirtyTicksCounter@@QEAAAEAU0@XZ
     */
    MCAPI struct DirtyTicksCounter & operator++();
    /**
     * @hash   1510122131
     * @symbol ?reset@DirtyTicksCounter@@QEAAXXZ
     */
    MCAPI void reset();
    /**
     * @hash   2103222915
     * @symbol ?touch@DirtyTicksCounter@@QEAAXXZ
     */
    MCAPI void touch();
    /**
     * @hash   1587509637
     * @symbol ?max@DirtyTicksCounter@@SA?AU1@XZ
     */
    MCAPI static struct DirtyTicksCounter max();

};