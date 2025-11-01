#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ActorUniqueID;
// clang-format on

class FlockingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> mNeighborhood;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mCenterOfMass;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mGroupVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mGoalHeading;
    ::ll::TypedStorage<4, 12, ::Vec3>                         mCurrentHeading;
    ::ll::TypedStorage<1, 1, bool>                            mInWater;
    ::ll::TypedStorage<1, 1, bool>                            mMatchVariant;
    ::ll::TypedStorage<1, 1, bool>                            mUseCenterOfMass;
    ::ll::TypedStorage<1, 1, bool>                            mIsLeader;
    ::ll::TypedStorage<1, 1, bool>                            mInFlock;
    ::ll::TypedStorage<1, 1, bool>                            mIsEnabled;
    ::ll::TypedStorage<1, 1, bool>                            mHasTargetGoal;
    ::ll::TypedStorage<1, 1, bool>                            mUsingDirection;
    ::ll::TypedStorage<4, 4, int>                             mFlockLimit;
    ::ll::TypedStorage<4, 4, float>                           mLonerChance;
    ::ll::TypedStorage<4, 4, float>                           mGoalWeight;
    ::ll::TypedStorage<4, 4, float>                           mInfluenceRadius;
    ::ll::TypedStorage<4, 4, float>                           mBreachInfluence;
    ::ll::TypedStorage<4, 4, float>                           mSeparationWeight;
    ::ll::TypedStorage<4, 4, float>                           mSeparationThreshold;
    ::ll::TypedStorage<4, 4, float>                           mCohesionWeight;
    ::ll::TypedStorage<4, 4, float>                           mCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                           mInnerCohesionThreshold;
    ::ll::TypedStorage<4, 4, float>                           mMinHeight;
    ::ll::TypedStorage<4, 4, float>                           mMaxHeight;
    ::ll::TypedStorage<4, 4, float>                           mBlockDist;
    ::ll::TypedStorage<4, 4, float>                           mBlockWeight;
    ::ll::TypedStorage<1, 1, bool>                            mOverspeedRequired;
    // NOLINTEND

public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&);
    FlockingComponent(FlockingComponent const&);
    FlockingComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FlockingComponent(::FlockingComponent&&);

    MCNAPI void calculateFlockVector(::Actor const& owner);

    MCNAPI bool canJoinFlock(::Actor& owner) const;

    MCNAPI void joinFlock(::Actor& owner);

    MCNAPI void manageNeighborhood(::Actor& owner);

    MCNAPI void mergeNeighborhoods(::Actor& owner);

    MCNAPI ::FlockingComponent& operator=(::FlockingComponent&&);

    MCNAPI void updateNeighborhoodData(::Actor const& owner);

    MCNAPI bool validateVariantEntityTypes(::Actor const& e0, ::Actor const& e1) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FlockingComponent&&);
    // NOLINTEND
};
