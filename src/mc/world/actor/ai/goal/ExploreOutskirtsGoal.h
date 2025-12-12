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
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual ~ExploreOutskirtsGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $appendDebugInfo(::std::string& str) const;

    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
