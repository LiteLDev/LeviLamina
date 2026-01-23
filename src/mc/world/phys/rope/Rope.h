#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"
#include "mc/world/phys/rope/RopeParams.h"
#include "mc/world/phys/rope/RopePoints.h"
#include "mc/world/phys/rope/rope_details/AABBPred.h"

// auto generated forward declare list
// clang-format off
struct AABBBucket;
struct RopeNode;
struct RopeWave;
// clang-format on

class Rope {
public:
    // Rope inner types declare
    // clang-format off
    struct IntermediateData;
    // clang-format on

    // Rope inner types define
    struct IntermediateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::RopePoints> mQueuedRenderPoints;
        ::ll::TypedStorage<4, 12, ::Vec3>       mPrevStartPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mPrevEndPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mStartPin;
        ::ll::TypedStorage<4, 12, ::Vec3>       mEndPin;
        ::ll::TypedStorage<8, 8, uint64>        mToCutNode;
        ::ll::TypedStorage<1, 1, bool>          mAbandonCollision;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~IntermediateData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::Rope::IntermediateData>                    mIntermediateData;
    ::ll::TypedStorage<8, 88, ::RopeParams>                                mParameters;
    ::ll::TypedStorage<8, 32, ::RopePoints>                                mRenderPoints;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeNode>>                   mNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AABBBucket>>                 mColliderBuckets;
    ::ll::TypedStorage<8, 24, ::std::vector<::RopeWave>>                   mWaves;
    ::ll::TypedStorage<8, 16, ::std::set<::AABB, ::RopeDetails::AABBPred>> mDenyListedColliders;
    ::ll::TypedStorage<8, 8, uint64>                                       mCutNode;
    ::ll::TypedStorage<8, 8, uint64>                                       mMinNodes;
    // NOLINTEND

public:
    // prevent constructor by default
    Rope& operator=(Rope const&);
    Rope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Rope(::Rope const&);

    MCAPI void _finalizeBucket(::AABBBucket& bucket);

    MCAPI ::AABBBucket& _getBucket(uchar bucketIndex);

    MCAPI void _integrate();

    MCAPI void _pruneDenyList();

    MCAPI void _resize();

    MCAPI float _solveCollisions(bool checkDenyList);

    MCAPI float _solveDistanceConstraints3();

    MCAPI void initializePins(::std::optional<::RopeParams> parameters);

    MCAPI void prepareAABBBucketsForNextFrame();

    MCAPI void tick();

    MCAPI ~Rope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Rope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
