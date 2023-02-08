/**
 * @file  Explosion.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1506691324
     * @symbol  ??0Explosion\@\@QEAA\@AEAVBlockSource\@\@PEAVActor\@\@AEBVVec3\@\@M\@Z
     */
    MCAPI Explosion(class BlockSource &, class Actor *, class Vec3 const &, float);
    /**
     * @hash   -270942105
     * @symbol  ?explode\@Explosion\@\@QEAAXXZ
     */
    MCAPI void explode();
    /**
     * @hash   733951048
     * @symbol  ?overrideInWater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void overrideInWater(bool);
    /**
     * @hash   1420759686
     * @symbol  ?setAllowUnderwater\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setAllowUnderwater(bool);
    /**
     * @hash   1399766808
     * @symbol  ?setBreaking\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setBreaking(bool);
    /**
     * @hash   883342664
     * @symbol  ?setFire\@Explosion\@\@QEAAX_N\@Z
     */
    MCAPI void setFire(bool);
    /**
     * @hash   1476777568
     * @symbol  ?setMaxResistance\@Explosion\@\@QEAAXM\@Z
     */
    MCAPI void setMaxResistance(float);
    /**
     * @hash   -1729416303
     * @symbol  ??1Explosion\@\@QEAA\@XZ
     */
    MCAPI ~Explosion();

//private:
    /**
     * @hash   1887038591
     * @symbol  ?_getActorsInRange\@Explosion\@\@AEBA?AV?$vector\@V?$not_null\@PEAVActor\@\@\@gsl\@\@V?$allocator\@V?$not_null\@PEAVActor\@\@\@gsl\@\@\@std\@\@\@std\@\@PEAVActor\@\@M\@Z
     */
    MCAPI std::vector<class gsl::not_null<class Actor *>> _getActorsInRange(class Actor *, float) const;

private:

};