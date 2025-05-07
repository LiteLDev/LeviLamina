#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class OcelotAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&> mMob;
    ::ll::TypedStorage<4, 4, int>    mAttackTicks;
    ::ll::TypedStorage<4, 4, int>    mCooldownTicks;
    ::ll::TypedStorage<4, 4, float>  mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>  mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>  mMaxDistance;
    ::ll::TypedStorage<4, 4, float>  mMaxSneakRange;
    ::ll::TypedStorage<4, 4, float>  mMaxSprintRange;
    ::ll::TypedStorage<4, 4, float>  mReachMultiplier;
    ::ll::TypedStorage<4, 4, float>  mSneakSpeedModifier;
    ::ll::TypedStorage<4, 4, float>  mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float>  mWalkSpeedModifier;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~OcelotAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
