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
     * @symbol  ??0RopeSystem\@\@QEAA\@XZ
     */
    MCAPI RopeSystem();
    /**
     * @symbol  ?_initializePins\@RopeSystem\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol  ?cutAtPercent\@RopeSystem\@\@QEAAXM\@Z
     */
    MCAPI void cutAtPercent(float);
    /**
     * @symbol  ?initialize\@RopeSystem\@\@QEAAXAEBURopeParams\@\@\@Z
     */
    MCAPI void initialize(struct RopeParams const &);
    /**
     * @symbol  ?isCut\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isCut() const;
    /**
     * @symbol  ?isDestroyed\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isDestroyed() const;
    /**
     * @symbol  ?queueTick\@RopeSystem\@\@QEAAXAEAVBlockSource\@\@AEAV?$shared_ptr\@VRopeSystem\@\@\@std\@\@\@Z
     */
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    /**
     * @symbol  ??1RopeSystem\@\@QEAA\@XZ
     */
    MCAPI ~RopeSystem();
    /**
     * @symbol  ?sBucketLength\@RopeSystem\@\@2MB
     */
    MCAPI static float const sBucketLength;
    /**
     * @symbol  ?sEnabled\@RopeSystem\@\@2_NA
     */
    MCAPI static bool sEnabled;
    /**
     * @symbol  ?sEpsilon\@RopeSystem\@\@2MB
     */
    MCAPI static float const sEpsilon;

//private:
    /**
     * @symbol  ?_cacheColliders\@RopeSystem\@\@AEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool _cacheColliders(class BlockSource &);
    /**
     * @symbol  ?_finalizeBucket\@RopeSystem\@\@AEAAXAEAUAABBBucket\@\@\@Z
     */
    MCAPI void _finalizeBucket(struct AABBBucket &);
    /**
     * @symbol  ?_initializePins\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _initializePins();
    /**
     * @symbol  ?_integrate\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _integrate();
    /**
     * @symbol  ?_prepareAABBBuckets\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _prepareAABBBuckets();
    /**
     * @symbol  ?_propagateDistanceConstraint\@RopeSystem\@\@AEAAMAEBVVec3\@\@AEAV2\@M\@Z
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    /**
     * @symbol  ?_pruneDenyList\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _pruneDenyList();
    /**
     * @symbol  ?_pushRange\@RopeSystem\@\@AEAAX_K0\@Z
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64);
    /**
     * @symbol  ?_resizeRope\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _resizeRope();
    /**
     * @symbol  ?_solveCollisions\@RopeSystem\@\@AEAAM_N\@Z
     */
    MCAPI float _solveCollisions(bool);
    /**
     * @symbol  ?_solveDistanceConstraint\@RopeSystem\@\@AEAAMAEAVVec3\@\@0M\@Z
     */
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    /**
     * @symbol  ?_solveDistanceConstraintBlock\@RopeSystem\@\@AEAAMAEAVVec3\@\@000M\@Z
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    /**
     * @symbol  ?_solveDistanceConstraints3\@RopeSystem\@\@AEAAMXZ
     */
    MCAPI float _solveDistanceConstraints3();
    /**
     * @symbol  ?_tick\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tick();
    /**
     * @symbol  ?_tickWaves\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tickWaves();

private:

};