/**
 * @file  MC/RopeSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1669788083
     * @symbol ??0RopeSystem@@QEAA@XZ
     */
    MCAPI RopeSystem();
    /**
     * @hash   902741140
     * @symbol ?_initializePins@RopeSystem@@QEAAXAEBVVec3@@0@Z
     */
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    /**
     * @hash   -2042780652
     * @symbol ?cutAtPercent@RopeSystem@@QEAAXM@Z
     */
    MCAPI void cutAtPercent(float);
    /**
     * @hash   -1181362630
     * @symbol ?initialize@RopeSystem@@QEAAXAEBURopeParams@@@Z
     */
    MCAPI void initialize(struct RopeParams const &);
    /**
     * @hash   -1006230866
     * @symbol ?isCut@RopeSystem@@QEBA_NXZ
     */
    MCAPI bool isCut() const;
    /**
     * @hash   1046372876
     * @symbol ?isDestroyed@RopeSystem@@QEBA_NXZ
     */
    MCAPI bool isDestroyed() const;
    /**
     * @hash   106582732
     * @symbol ?queueTick@RopeSystem@@QEAAXAEAVBlockSource@@AEAV?$shared_ptr@VRopeSystem@@@std@@@Z
     */
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    /**
     * @hash   1015427867
     * @symbol ??1RopeSystem@@QEAA@XZ
     */
    MCAPI ~RopeSystem();
    /**
     * @hash   1366676583
     * @symbol ?sBucketLength@RopeSystem@@2MB
     */
    MCAPI static float const sBucketLength;
    /**
     * @hash   892308101
     * @symbol ?sEnabled@RopeSystem@@2_NA
     */
    MCAPI static bool sEnabled;
    /**
     * @hash   1369865861
     * @symbol ?sEpsilon@RopeSystem@@2MB
     */
    MCAPI static float const sEpsilon;

//private:
    /**
     * @hash   1366833715
     * @symbol ?_cacheColliders@RopeSystem@@AEAA_NAEAVBlockSource@@@Z
     */
    MCAPI bool _cacheColliders(class BlockSource &);
    /**
     * @hash   964481293
     * @symbol ?_finalizeBucket@RopeSystem@@AEAAXAEAUAABBBucket@@@Z
     */
    MCAPI void _finalizeBucket(struct AABBBucket &);
    /**
     * @hash   -1454919640
     * @symbol ?_initializePins@RopeSystem@@AEAAXXZ
     */
    MCAPI void _initializePins();
    /**
     * @hash   971035917
     * @symbol ?_integrate@RopeSystem@@AEAAXXZ
     */
    MCAPI void _integrate();
    /**
     * @hash   723673820
     * @symbol ?_prepareAABBBuckets@RopeSystem@@AEAAXXZ
     */
    MCAPI void _prepareAABBBuckets();
    /**
     * @hash   300033040
     * @symbol ?_propagateDistanceConstraint@RopeSystem@@AEAAMAEBVVec3@@AEAV2@M@Z
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    /**
     * @hash   1971495872
     * @symbol ?_pruneDenyList@RopeSystem@@AEAAXXZ
     */
    MCAPI void _pruneDenyList();
    /**
     * @symbol ?_pushRange@RopeSystem@@AEAAX_K0@Z
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64);
    /**
     * @hash   1076578384
     * @symbol ?_resizeRope@RopeSystem@@AEAAXXZ
     */
    MCAPI void _resizeRope();
    /**
     * @hash   1970903632
     * @symbol ?_solveCollisions@RopeSystem@@AEAAM_N@Z
     */
    MCAPI float _solveCollisions(bool);
    /**
     * @hash   -1674051059
     * @symbol ?_solveDistanceConstraint@RopeSystem@@AEAAMAEAVVec3@@0M@Z
     */
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    /**
     * @hash   -1940529452
     * @symbol ?_solveDistanceConstraintBlock@RopeSystem@@AEAAMAEAVVec3@@000M@Z
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    /**
     * @hash   1089357397
     * @symbol ?_solveDistanceConstraints3@RopeSystem@@AEAAMXZ
     */
    MCAPI float _solveDistanceConstraints3();
    /**
     * @hash   -1063598553
     * @symbol ?_tick@RopeSystem@@AEAAXXZ
     */
    MCAPI void _tick();
    /**
     * @hash   -820510567
     * @symbol ?_tickWaves@RopeSystem@@AEAAXXZ
     */
    MCAPI void _tickWaves();

private:

};