#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
struct AABBBucket;
struct RopeParams;
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkce34a3;
    ::ll::UntypedStorage<8, 32> mUnk280dd2;
    ::ll::UntypedStorage<8, 32> mUnk3d6d35;
    ::ll::UntypedStorage<8, 24> mUnkfb98c7;
    ::ll::UntypedStorage<8, 24> mUnk4457bf;
    ::ll::UntypedStorage<8, 24> mUnkd205d8;
    ::ll::UntypedStorage<8, 88> mUnkfae5e8;
    ::ll::UntypedStorage<8, 16> mUnk5c68a3;
    ::ll::UntypedStorage<4, 12> mUnkd3c819;
    ::ll::UntypedStorage<4, 12> mUnk97573a;
    ::ll::UntypedStorage<8, 8>  mUnkb42b2c;
    ::ll::UntypedStorage<8, 8>  mUnk739c92;
    ::ll::UntypedStorage<8, 8>  mUnk83f922;
    ::ll::UntypedStorage<8, 8>  mUnke365be;
    ::ll::UntypedStorage<8, 8>  mUnkc1e0e1;
    ::ll::UntypedStorage<4, 4>  mUnk5d427a;
    ::ll::UntypedStorage<8, 80> mUnk8b840e;
    ::ll::UntypedStorage<1, 1>  mUnk2068ee;
    ::ll::UntypedStorage<4, 12> mUnkedf1b8;
    ::ll::UntypedStorage<4, 12> mUnkb4da06;
    ::ll::UntypedStorage<8, 8>  mUnk8463ca;
    // NOLINTEND

public:
    // prevent constructor by default
    RopeSystem& operator=(RopeSystem const&);
    RopeSystem(RopeSystem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RopeSystem();

    MCAPI bool _cacheColliders(::BlockSource& region);

    MCAPI void _finalizeBucket(::AABBBucket& bucket);

    MCAPI void _initializePins();

    MCAPI void _initializePins(::Vec3 const& startPin, ::Vec3 const& endPin);

    MCAPI void _integrate();

    MCAPI void _prepareAABBBuckets();

    MCAPI void _pruneDenyList();

    MCAPI void _resizeRope();

    MCAPI float _solveCollisions(bool checkDenyList);

    MCAPI float _solveDistanceConstraint(::Vec3& a, ::Vec3& b, float targetDist);

    MCAPI float _solveDistanceConstraintBlock(::Vec3& a, ::Vec3& b, ::Vec3& c, ::Vec3& d, float targetDist);

    MCAPI float _solveDistanceConstraints1();

    MCAPI float _solveDistanceConstraints3();

    MCAPI void _tick();

    MCAPI void _tickWaves();

    MCAPI void cutAtPercent(float percent);

    MCAPI void initialize(::RopeParams const& params);

    MCAPI bool isCut() const;

    MCAPI bool isDestroyed() const;

    MCAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);

    MCAPI ~RopeSystem();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& sBucketLength();

    MCAPI static bool& sEnabled();

    MCAPI static float const& sEpsilon();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
