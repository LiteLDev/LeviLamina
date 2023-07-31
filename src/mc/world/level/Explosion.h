#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Explosion {

public:
    // prevent constructor by default
    Explosion& operator=(Explosion const&) = delete;
    Explosion(Explosion const&)            = delete;
    Explosion()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Explosion\@\@QEAA\@AEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI Explosion(class BlockSource&, class Actor*, class Vec3 const&, float);
    /**
     * @symbol ?explode\@Explosion\@\@QEAAXXZ
     */
    MCAPI void explode();
    /**
     * @symbol ?overrideInWater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void overrideInWater(bool);
    /**
     * @symbol ?setAllowUnderwater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @symbol ?setBreaking\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setBreaking(bool);
    /**
     * @symbol ?setFire\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setFire(bool);
    /**
     * @symbol ?setMaxResistance\@Explosion\@\@QEAAXM\@Z
     */
    MCAPI void setMaxResistance(float);
    /**
     * @symbol ??1Explosion\@\@QEAA\@XZ
     */
    MCAPI ~Explosion();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getActorsInRange\@Explosion\@\@AEBA?AV?$vector\@V?$not_null\@PEAVActor\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVActor\@\@\@gsl\@\@\@std\@\@\@std\@\@PEAVActor\@\@M\@Z
     */
    MCAPI std::vector<class gsl::not_null<class Actor*>> _getActorsInRange(class Actor*, float) const;
    // NOLINTEND
};
