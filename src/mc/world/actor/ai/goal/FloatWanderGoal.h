#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/util/FloatRange.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Mob;
class Random;
// clang-format on

class FloatWanderGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>       mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>      mTargetPos;
    ::ll::TypedStorage<4, 4, int>          mFloatDuration;
    ::ll::TypedStorage<4, 4, float>        mTargetXZDist;
    ::ll::TypedStorage<4, 4, float>        mTargetYDist;
    ::ll::TypedStorage<4, 4, float>        mSurfaceXZDist;
    ::ll::TypedStorage<4, 4, float>        mSurfaceYDist;
    ::ll::TypedStorage<4, 4, float>        mYOffset;
    ::ll::TypedStorage<1, 1, bool>         mMustReach;
    ::ll::TypedStorage<1, 1, bool>         mRandomReselect;
    ::ll::TypedStorage<1, 1, bool>         mUseHomePositionRestriction;
    ::ll::TypedStorage<1, 1, bool>         mAdditionalCollisionBuffer;
    ::ll::TypedStorage<1, 1, bool>         mAllowNavigatingThroughLiquids;
    ::ll::TypedStorage<1, 1, bool>         mNavigateAroundSurface;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloatDurationRange;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatWanderGoal& operator=(FloatWanderGoal const&);
    FloatWanderGoal(FloatWanderGoal const&);
    FloatWanderGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FloatWanderGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canReach(::Vec3 const& targetPos, float dist) const;

    MCNAPI ::Vec3 _chooseRandomPosition(::Vec3 const& mobPos, ::Random& random);

    MCNAPI ::Vec3 const _getSuitableTargetPosition();

    MCNAPI bool const _isPosCloseToSurface(
        ::BlockSource& region,
        ::Vec3 const&  targetPos,
        int            distanceToBlocksY,
        int            distanceToBlocksXZ
    ) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
