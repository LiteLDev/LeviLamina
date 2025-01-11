#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class Vec3;
struct AABBBucket;
struct AABBPred;
struct ActorUniqueID;
struct RopeNode;
struct RopeParams;
struct RopePoints;
struct RopeWave;
namespace Bedrock::Threading { class Mutex; }
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
