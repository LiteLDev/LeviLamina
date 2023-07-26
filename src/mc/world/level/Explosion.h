#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Explosion {

public:
    // prevent constructor by default
    Explosion& operator=(Explosion const&) = delete;
    Explosion(Explosion const&)            = delete;
    Explosion()                            = delete;

public:
    /**
     * @symbol ??0Explosion\@\@QEAA\@AEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI Explosion(class BlockSource&, class Actor*, class Vec3 const&, float); // NOLINT
    /**
     * @symbol ?explode\@Explosion\@\@QEAAXXZ
     */
    MCAPI void explode(); // NOLINT
    /**
     * @symbol ?overrideInWater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void overrideInWater(bool); // NOLINT
    /**
     * @symbol ?setAllowUnderwater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool); // NOLINT
    /**
     * @symbol ?setBreaking\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setBreaking(bool); // NOLINT
    /**
     * @symbol ?setFire\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setFire(bool); // NOLINT
    /**
     * @symbol ?setMaxResistance\@Explosion\@\@QEAAXM\@Z
     */
    MCAPI void setMaxResistance(float); // NOLINT
    /**
     * @symbol ??1Explosion\@\@QEAA\@XZ
     */
    MCAPI ~Explosion(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_getActorsInRange\@Explosion\@\@AEBA?AV?$vector\@V?$not_null\@PEAVActor\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVActor\@\@\@gsl\@\@\@std\@\@\@std\@\@PEAVActor\@\@M\@Z
     */
    MCAPI std::vector<class gsl::not_null<class Actor*>> _getActorsInRange(class Actor*, float) const; // NOLINT

private:
};
