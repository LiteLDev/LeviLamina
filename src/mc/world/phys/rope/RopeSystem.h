#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RopeSystem {

public:
    // prevent constructor by default
    RopeSystem& operator=(RopeSystem const&) = delete;
    RopeSystem(RopeSystem const&)            = delete;

public:
    /**
     * @symbol ??0RopeSystem\@\@QEAA\@XZ
     */
    MCAPI RopeSystem(); // NOLINT
    /**
     * @symbol ?_initializePins\@RopeSystem\@\@QEAAXAEBVVec3\@\@0\@Z
     */
    MCAPI void _initializePins(class Vec3 const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?cutAtPercent\@RopeSystem\@\@QEAAXM\@Z
     */
    MCAPI void cutAtPercent(float); // NOLINT
    /**
     * @symbol ?initialize\@RopeSystem\@\@QEAAXAEBURopeParams\@\@\@Z
     */
    MCAPI void initialize(struct RopeParams const&); // NOLINT
    /**
     * @symbol ?isCut\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isCut() const; // NOLINT
    /**
     * @symbol ?isDestroyed\@RopeSystem\@\@QEBA_NXZ
     */
    MCAPI bool isDestroyed() const; // NOLINT
    /**
     * @symbol ?queueTick\@RopeSystem\@\@QEAAXAEAVBlockSource\@\@AEAV?$shared_ptr\@VRopeSystem\@\@\@std\@\@\@Z
     */
    MCAPI void queueTick(class BlockSource&, class std::shared_ptr<class RopeSystem>&); // NOLINT
    /**
     * @symbol ??1RopeSystem\@\@QEAA\@XZ
     */
    MCAPI ~RopeSystem(); // NOLINT
    /**
     * @symbol ?sBucketLength\@RopeSystem\@\@2MB
     */
    MCAPI static float const sBucketLength; // NOLINT
    /**
     * @symbol ?sEnabled\@RopeSystem\@\@2_NA
     */
    MCAPI static bool sEnabled; // NOLINT
    /**
     * @symbol ?sEpsilon\@RopeSystem\@\@2MB
     */
    MCAPI static float const sEpsilon; // NOLINT

    // private:
    /**
     * @symbol ?_cacheColliders\@RopeSystem\@\@AEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool _cacheColliders(class BlockSource&); // NOLINT
    /**
     * @symbol ?_finalizeBucket\@RopeSystem\@\@AEAAXAEAUAABBBucket\@\@\@Z
     */
    MCAPI void _finalizeBucket(struct AABBBucket&); // NOLINT
    /**
     * @symbol ?_initializePins\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _initializePins(); // NOLINT
    /**
     * @symbol ?_integrate\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _integrate(); // NOLINT
    /**
     * @symbol ?_prepareAABBBuckets\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _prepareAABBBuckets(); // NOLINT
    /**
     * @symbol ?_propagateDistanceConstraint\@RopeSystem\@\@AEAAMAEBVVec3\@\@AEAV2\@M\@Z
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const&, class Vec3&, float); // NOLINT
    /**
     * @symbol ?_pruneDenyList\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _pruneDenyList(); // NOLINT
    /**
     * @symbol ?_pushRange\@RopeSystem\@\@AEAAX_K0\@Z
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64); // NOLINT
    /**
     * @symbol ?_resizeRope\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _resizeRope(); // NOLINT
    /**
     * @symbol ?_solveCollisions\@RopeSystem\@\@AEAAM_N\@Z
     */
    MCAPI float _solveCollisions(bool); // NOLINT
    /**
     * @symbol ?_solveDistanceConstraint\@RopeSystem\@\@AEAAMAEAVVec3\@\@0M\@Z
     */
    MCAPI float _solveDistanceConstraint(class Vec3&, class Vec3&, float); // NOLINT
    /**
     * @symbol ?_solveDistanceConstraintBlock\@RopeSystem\@\@AEAAMAEAVVec3\@\@000M\@Z
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3&, class Vec3&, class Vec3&, class Vec3&, float); // NOLINT
    /**
     * @symbol ?_solveDistanceConstraints3\@RopeSystem\@\@AEAAMXZ
     */
    MCAPI float _solveDistanceConstraints3(); // NOLINT
    /**
     * @symbol ?_tick\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tick(); // NOLINT
    /**
     * @symbol ?_tickWaves\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _tickWaves(); // NOLINT
    /**
     * @symbol ?_updateRenderPoints\@RopeSystem\@\@AEAAXXZ
     */
    MCAPI void _updateRenderPoints(); // NOLINT

private:
};
