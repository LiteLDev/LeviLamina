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
    // prevent constructor by default
    OcelotAttackGoal& operator=(OcelotAttackGoal const&);
    OcelotAttackGoal(OcelotAttackGoal const&);
    OcelotAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~OcelotAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $stop();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
