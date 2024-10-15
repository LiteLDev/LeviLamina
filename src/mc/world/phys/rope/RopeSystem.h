#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RopeSystem {
public:
    // prevent constructor by default
    RopeSystem& operator=(RopeSystem const&);
    RopeSystem(RopeSystem const&);

public:
    // NOLINTBEGIN
    MCAPI RopeSystem();

    MCAPI void _initializePins(class Vec3 const& startPin, class Vec3 const& endPin);

    MCAPI void cutAtPercent(float percent);

    MCAPI void initialize(struct RopeParams const& params);

    MCAPI bool isCut() const;

    MCAPI bool isDestroyed() const;

    MCAPI void queueTick(class BlockSource& region, std::shared_ptr<class RopeSystem>& self);

    MCAPI ~RopeSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _cacheColliders(class BlockSource& region);

    MCAPI void _finalizeBucket(struct AABBBucket& bucket);

    MCAPI void _initializePins();

    MCAPI void _integrate();

    MCAPI void _prepareAABBBuckets();

    MCAPI float _propagateDistanceConstraint(class Vec3 const& a, class Vec3& b, float targetDist);

    MCAPI void _pruneDenyList();

    MCAPI void _pushRange(uint64 begin, uint64 end);

    MCAPI void _resizeRope();

    MCAPI float _solveCollisions(bool checkDenyList);

    MCAPI float _solveDistanceConstraint(class Vec3& a, class Vec3& b, float targetDist);

    MCAPI float
    _solveDistanceConstraintBlock(class Vec3& a, class Vec3& b, class Vec3& c, class Vec3& d, float targetDist);

    MCAPI float _solveDistanceConstraints3();

    MCAPI void _tick();

    MCAPI void _tickWaves();

    MCAPI void _updateRenderPoints();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI static float const& sBucketLength();

    MCAPI static bool& sEnabled();

    MCAPI static float const& sEpsilon();

    // NOLINTEND
};
