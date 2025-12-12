#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Vec3;
// clang-format on

class RangedAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>               mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>> mTarget;
    ::ll::TypedStorage<1, 1, bool>                 mIsChargedAttack;
    ::ll::TypedStorage<1, 1, bool>                 mUsingChargedItem;
    ::ll::TypedStorage<1, 1, bool>                 mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                 mSwing;
    ::ll::TypedStorage<4, 4, int>                  mReloadBurstTicks;
    ::ll::TypedStorage<4, 4, int>                  mCanSeeTargetTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstShotsLeft;
    ::ll::TypedStorage<4, 4, int>                  mBurstTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstCooldownTicks;
    ::ll::TypedStorage<4, 4, int>                  mChargeTicks;
    ::ll::TypedStorage<4, 4, int>                  mReloadTicksMin;
    ::ll::TypedStorage<4, 4, int>                  mReloadTicksMax;
    ::ll::TypedStorage<4, 4, int>                  mChargeReadyTicks;
    ::ll::TypedStorage<4, 4, int>                  mChargeReloadTicks;
    ::ll::TypedStorage<4, 4, int>                  mBurstShots;
    ::ll::TypedStorage<4, 4, int>                  mTargetInSightTicks;
    ::ll::TypedStorage<4, 4, float>                mAttackRadius;
    ::ll::TypedStorage<4, 4, float>                mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float>                mAttackRadiusMinSq;
    ::ll::TypedStorage<4, 4, float>                mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float>                mRangedFov;
    ::ll::TypedStorage<4, 4, float>                mSpeedMultiplier;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() /*override*/;

    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    virtual ~RangedAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _dischargeCarriedItem();

    MCNAPI void
    handleAttackBehavior(::Actor* lockedTarget, ::Vec3 const& lockedTargetPos, float targetDistanceSq, bool canSee);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

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
