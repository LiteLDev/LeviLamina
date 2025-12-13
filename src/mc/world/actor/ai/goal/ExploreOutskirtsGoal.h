#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class ExploreOutskirtsGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>  mMob;
    ::ll::TypedStorage<4, 4, int>     mMinimumWaitTimeTicks;
    ::ll::TypedStorage<4, 4, int>     mNextXZDistance;
    ::ll::TypedStorage<4, 4, int>     mNextYDistance;
    ::ll::TypedStorage<8, 8, ::Tick>  mMaximumWaitTimeTicks;
    ::ll::TypedStorage<8, 8, ::Tick>  mTravelTimeout;
    ::ll::TypedStorage<4, 4, float>   mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>   mExploreDistance;
    ::ll::TypedStorage<4, 4, float>   mMinimumPerimeter;
    ::ll::TypedStorage<4, 4, float>   mMinimumDistanceFromTarget;
    ::ll::TypedStorage<4, 4, float>   mWaitTimerRatio;
    ::ll::TypedStorage<4, 12, ::Vec3> mDistanceFromBoundary;
    ::ll::TypedStorage<1, 1, bool>    mFailedToPath;
    ::ll::TypedStorage<1, 1, bool>    mTraveling;
    ::ll::TypedStorage<8, 8, ::Tick>  mShiftLocationTimer;
    ::ll::TypedStorage<8, 8, ::Tick>  mWaitTimer;
    ::ll::TypedStorage<8, 8, ::Tick>  mTravelTimer;
    ::ll::TypedStorage<4, 12, ::Vec3> mWantedPos;
    // NOLINTEND

public:
    // prevent constructor by default
    ExploreOutskirtsGoal& operator=(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal(ExploreOutskirtsGoal const&);
    ExploreOutskirtsGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~ExploreOutskirtsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $appendDebugInfo(::std::string& str) const;

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
