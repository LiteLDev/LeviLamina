#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class Mob;
class Vec3;
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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwimUpForBreathGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SwimUpForBreathGoal(::Mob& mob);

    MCAPI int _determineApproximateLiquidDepthOfMob() const;

    MCAPI void _findAirPosition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
