#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RopeSystem {
public:
    // prevent constructor by default
    RopeSystem& operator=(RopeSystem const&);
    RopeSystem(RopeSystem const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RopeSystem@@QEAA@XZ
    MCAPI RopeSystem();

    // symbol: ?_initializePins@RopeSystem@@QEAAXAEBVVec3@@0@Z
    MCAPI void _initializePins(class Vec3 const& startPin, class Vec3 const& endPin);

    // symbol: ?cutAtPercent@RopeSystem@@QEAAXM@Z
    MCAPI void cutAtPercent(float percent);

    // symbol: ?initialize@RopeSystem@@QEAAXAEBURopeParams@@@Z
    MCAPI void initialize(struct RopeParams const& params);

    // symbol: ?isCut@RopeSystem@@QEBA_NXZ
    MCAPI bool isCut() const;

    // symbol: ?isDestroyed@RopeSystem@@QEBA_NXZ
    MCAPI bool isDestroyed() const;

    // symbol: ?queueTick@RopeSystem@@QEAAXAEAVBlockSource@@AEAV?$shared_ptr@VRopeSystem@@@std@@@Z
    MCAPI void queueTick(class BlockSource& region, std::shared_ptr<class RopeSystem>& self);

    // symbol: ??1RopeSystem@@QEAA@XZ
    MCAPI ~RopeSystem();

    // symbol: ?sBucketLength@RopeSystem@@2MB
    MCAPI static float const sBucketLength;

    // symbol: ?sEnabled@RopeSystem@@2_NA
    MCAPI static bool sEnabled;

    // symbol: ?sEpsilon@RopeSystem@@2MB
    MCAPI static float const sEpsilon;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_cacheColliders@RopeSystem@@AEAA_NAEAVBlockSource@@@Z
    MCAPI bool _cacheColliders(class BlockSource& region);

    // symbol: ?_finalizeBucket@RopeSystem@@AEAAXAEAUAABBBucket@@@Z
    MCAPI void _finalizeBucket(struct AABBBucket& bucket);

    // symbol: ?_initializePins@RopeSystem@@AEAAXXZ
    MCAPI void _initializePins();

    // symbol: ?_integrate@RopeSystem@@AEAAXXZ
    MCAPI void _integrate();

    // symbol: ?_prepareAABBBuckets@RopeSystem@@AEAAXXZ
    MCAPI void _prepareAABBBuckets();

    // symbol: ?_propagateDistanceConstraint@RopeSystem@@AEAAMAEBVVec3@@AEAV2@M@Z
    MCAPI float _propagateDistanceConstraint(class Vec3 const& a, class Vec3& b, float targetDist);

    // symbol: ?_pruneDenyList@RopeSystem@@AEAAXXZ
    MCAPI void _pruneDenyList();

    // symbol: ?_pushRange@RopeSystem@@AEAAX_K0@Z
    MCAPI void _pushRange(uint64 begin, uint64 end);

    // symbol: ?_resizeRope@RopeSystem@@AEAAXXZ
    MCAPI void _resizeRope();

    // symbol: ?_solveCollisions@RopeSystem@@AEAAM_N@Z
    MCAPI float _solveCollisions(bool checkDenyList);

    // symbol: ?_solveDistanceConstraint@RopeSystem@@AEAAMAEAVVec3@@0M@Z
    MCAPI float _solveDistanceConstraint(class Vec3& a, class Vec3& b, float targetDist);

    // symbol: ?_solveDistanceConstraintBlock@RopeSystem@@AEAAMAEAVVec3@@000M@Z
    MCAPI float
    _solveDistanceConstraintBlock(class Vec3& a, class Vec3& b, class Vec3& c, class Vec3& d, float targetDist);

    // symbol: ?_solveDistanceConstraints3@RopeSystem@@AEAAMXZ
    MCAPI float _solveDistanceConstraints3();

    // symbol: ?_tick@RopeSystem@@AEAAXXZ
    MCAPI void _tick();

    // symbol: ?_tickWaves@RopeSystem@@AEAAXXZ
    MCAPI void _tickWaves();

    // NOLINTEND
};
