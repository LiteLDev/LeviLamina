/**
 * @file  Explosion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Explosion.
 *
 */
class Explosion {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSION
public:
    class Explosion& operator=(class Explosion const &) = delete;
    Explosion(class Explosion const &) = delete;
    Explosion() = delete;
#endif

public:
    /**
     * @hash   2107119172
     * @symbol ??0Explosion@@QEAA@AEAVBlockSource@@PEAVActor@@AEBVVec3@@M@Z
     */
    MCAPI Explosion(class BlockSource &, class Actor *, class Vec3 const &, float);
    /**
     * @hash   -952590937
     * @symbol ?explode@Explosion@@QEAAXXZ
     */
    MCAPI void explode();
    /**
     * @hash   52133080
     * @symbol ?overrideInWater@Explosion@@QEAAX_N@Z
     */
    MCAPI void overrideInWater(bool);
    /**
     * @hash   738941718
     * @symbol ?setAllowUnderwater@Explosion@@QEAAX_N@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @hash   717948840
     * @symbol ?setBreaking@Explosion@@QEAAX_N@Z
     */
    MCAPI void setBreaking(bool);
    /**
     * @hash   1811760920
     * @symbol ?setFire@Explosion@@QEAAX_N@Z
     */
    MCAPI void setFire(bool);
    /**
     * @hash   794959600
     * @symbol ?setMaxResistance@Explosion@@QEAAXM@Z
     */
    MCAPI void setMaxResistance(float);
    /**
     * @hash   1781451873
     * @symbol ??1Explosion@@QEAA@XZ
     */
    MCAPI ~Explosion();

};