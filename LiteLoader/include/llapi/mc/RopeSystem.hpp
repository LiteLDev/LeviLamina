/**
 * @file  RopeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RopeSystem.
 *
 */
class RopeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPESYSTEM
public:
    class RopeSystem& operator=(class RopeSystem const &) = delete;
    RopeSystem(class RopeSystem const &) = delete;
#endif

public:
    /**
     * @hash   -955003971
     * @symbol  ??0RopeSystem\@\@QEAA\@XZ
     */
    MCAPI RopeSystem();
    /**
     * @hash   1617556004
     * @symbol  ?_initializePins\@RopeSystem\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -1327981164
     * @symbol  ?cutAtPercent\@RopeSystem\@\@QEAAXM\@Z
     */
    MCAPI void cutAtPercent(float);
    /**
     * @hash   -466563142
     * @symbol  ?initialize\@RopeSystem\@\@QEAAXAEBURopeParams\@\@\@Z
     */
    MCAPI void initialize(struct RopeParams const &);
    /**
     * @hash   -291431378
     * @symbol  ?isCut\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isCut() const;
    /**
     * @hash   1761172364
     * @symbol  ?isDestroyed\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isDestroyed() const;
    /**
     * @hash   821382220
     * @symbol  ?queueTick\@RopeSystem\@\@QEAAXAEAVBlockSource\@\@AEAV?$shared_ptr\@VRopeSystem\@\@\@std\@\@\@Z
     */
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    /**
     * @hash   317034571
     * @symbol  ??1RopeSystem\@\@QEAA\@XZ
     */
    MCAPI ~RopeSystem();
    /**
     * @hash   -1883576081
     * @symbol  ?sBucketLength\@RopeSystem\@\@2MB
     */
    MCAPI static float const sBucketLength;
    /**
     * @hash   1771784549
     * @symbol  ?sEnabled\@RopeSystem\@\@2_NA
     */
    MCAPI static bool sEnabled;
    /**
     * @hash   -1880386803
     * @symbol  ?sEpsilon\@RopeSystem\@\@2MB
     */
    MCAPI static float const sEpsilon;

//private:
    /**
     * @hash   2081633203
     * @symbol  ?_cacheColliders\@RopeSystem\@\@AEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool _cacheColliders(class BlockSource &);
    /**
     * @hash   1679296157
     * @symbol  ?_finalizeBucket\@RopeSystem\@\@AEAAXAEAUAABBBucket\@\@\@Z
     */
    MCAPI void _finalizeBucket(struct AABBBucket &);
    /**
     * @hash   -740104776
     * @symbol  ?_initializePins\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _initializePins();
    /**
     * @hash   1685850781
     * @symbol  ?_integrate\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _integrate();
    /**
     * @hash   1438488684
     * @symbol  ?_prepareAABBBuckets\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _prepareAABBBuckets();
    /**
     * @hash   1014847904
     * @symbol  ?_propagateDistanceConstraint\@RopeSystem\@\@AEAAMAEBVVec3\@\@AEAV2\@M\@Z
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    /**
     * @hash   -1608656560
     * @symbol  ?_pruneDenyList\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _pruneDenyList();
    /**
     * @hash   1945972991
     * @symbol  ?_pushRange\@RopeSystem\@\@AEAAX_K0\@Z
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64);
    /**
     * @hash   1791485504
     * @symbol  ?_resizeRope\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _resizeRope();
    /**
     * @hash   -1609171920
     * @symbol  ?_solveCollisions\@RopeSystem\@\@AEAAM_N\@Z
     */
    MCAPI float _solveCollisions(bool);
    /**
     * @hash   -959159315
     * @symbol  ?_solveDistanceConstraint\@RopeSystem\@\@AEAAMAEAVVec3\@\@0M\@Z
     */
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    /**
     * @hash   -1225637708
     * @symbol  ?_solveDistanceConstraintBlock\@RopeSystem\@\@AEAAMAEAVVec3\@\@000M\@Z
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    /**
     * @hash   1804249141
     * @symbol  ?_solveDistanceConstraints3\@RopeSystem\@\@AEAAMXZ
     */
    MCAPI float _solveDistanceConstraints3();
    /**
     * @hash   -348706809
     * @symbol  ?_tick\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tick();
    /**
     * @hash   -105711079
     * @symbol  ?_tickWaves\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tickWaves();

private:

};