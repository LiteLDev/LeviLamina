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
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
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
