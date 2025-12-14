#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class SwimUpForBreathGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>          mSpeedMod;
    ::ll::TypedStorage<4, 4, int>            mSearchRadius;
    ::ll::TypedStorage<4, 4, int>            mSearchHeight;
    ::ll::TypedStorage<4, 4, ::MaterialType> mMaterialType;
    ::ll::TypedStorage<8, 8, ::Mob&>         mMob;
    ::ll::TypedStorage<4, 12, ::Vec3>        mWanted;
    ::ll::TypedStorage<4, 4, int>            mStartBreath;
    ::ll::TypedStorage<1, 1, bool>           mEndsInAir;
    // NOLINTEND

public:
    // prevent constructor by default
    SwimUpForBreathGoal& operator=(SwimUpForBreathGoal const&);
    SwimUpForBreathGoal(SwimUpForBreathGoal const&);
    SwimUpForBreathGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual bool canBeInterrupted() /*override*/;

    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~SwimUpForBreathGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int _determineApproximateLiquidDepthOfMob() const;

    MCAPI void _findAirPosition();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD bool $canBeInterrupted();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
