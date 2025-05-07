#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/rope/AABBPred.h"
#include "mc/world/phys/rope/RopeParams.h"
#include "mc/world/phys/rope/RopePoints.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
struct AABBBucket;
struct RopeNode;
struct RopeWave;
// clang-format on

class RopeSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                            mWaveApplied;
    ::ll::TypedStorage<8, 32, ::RopePoints>                   mQueuedRenderPoints;
    ::ll::TypedStorage<8, 32, ::RopePoints>                   mRenderPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeNode>>      mNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABBBucket>>    mColliderBuckets;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeWave>>      mWaves;
    ::ll::TypedStorage<8, 88, ::RopeParams>                   mParams;
    ::ll::TypedStorage<8, 16, ::std::set<::AABB, ::AABBPred>> mDenyListedColliders;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPrevStartPin;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mPrevEndPin;
    ::ll::TypedStorage<8, 8, uint64>                          mCutNode;
    ::ll::TypedStorage<8, 8, uint64>                          mCutRenderNode;
    ::ll::TypedStorage<8, 8, uint64>                          mMinNodes;
    ::ll::TypedStorage<8, 8, uint64>                          mCutTicks;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                 mEndPinEntity;
    ::ll::TypedStorage<4, 4, ::std::atomic_flag>              mTicking;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>    mRenderMutex;
    ::ll::TypedStorage<1, 1, bool>                            mAbandonCollision;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mStartPin;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mEndPin;
    ::ll::TypedStorage<8, 8, uint64>                          mToCutNode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RopeSystem();

    MCNAPI bool _cacheColliders(::BlockSource& region);

    MCNAPI void _finalizeBucket(::AABBBucket& bucket);

    MCNAPI void _initializePins();

    MCNAPI void _integrate();

    MCNAPI void _prepareAABBBuckets();

    MCNAPI void _pruneDenyList();

    MCNAPI void _pushRange(uint64 begin, uint64 end);

    MCNAPI void _resizeRope();

    MCNAPI float _solveCollisions(bool checkDenyList);

    MCNAPI float _solveDistanceConstraint(::Vec3& a, ::Vec3& b, float targetDist);

    MCNAPI float _solveDistanceConstraintBlock(::Vec3& a, ::Vec3& b, ::Vec3& c, ::Vec3& d, float targetDist);

    MCNAPI float _solveDistanceConstraints1();

    MCNAPI float _solveDistanceConstraints3();

    MCNAPI void _tick();

    MCNAPI void _tickWaves();

    MCNAPI void _updateRenderPoints();

    MCNAPI void queueTick(::BlockSource& region, ::std::shared_ptr<::RopeSystem>& self);

    MCNAPI ~RopeSystem();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool& sEnabled();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
