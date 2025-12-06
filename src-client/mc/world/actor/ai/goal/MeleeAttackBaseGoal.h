#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/TempEPtr.h"
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
class Path;
// clang-format on

class MeleeAttackBaseGoal : public ::Goal {
public:
    // MeleeAttackBaseGoal inner types declare
    // clang-format off
    struct Navigation;
    // clang-format on

    // MeleeAttackBaseGoal inner types define
    struct Navigation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Path>> mPath;
        ::ll::TypedStorage<4, 4, int>                       mMinPathTicks;
        ::ll::TypedStorage<4, 4, int>                       mMaxPathTicks;
        ::ll::TypedStorage<4, 4, int>                       mPathFailTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mInnerBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mOuterBoundaryTickIncrease;
        ::ll::TypedStorage<4, 4, int>                       mTicksToRecalculatePath;
        ::ll::TypedStorage<4, 4, float>                     mPathInnerBoundarySq;
        ::ll::TypedStorage<4, 4, float>                     mPathOuterBoundarySq;
        ::ll::TypedStorage<4, 4, float>                     mSpeedMultiplier;
        ::ll::TypedStorage<1, 1, bool>                      mRequireCompletePath;
        ::ll::TypedStorage<1, 1, bool>                      mTrackTarget;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Navigation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::MeleeAttackBaseGoal::Navigation> mNavigation;
    ::ll::TypedStorage<8, 8, ::Mob&>                             mMob;
    ::ll::TypedStorage<8, 40, ::TempEPtr<::Actor>>               mTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                            mLastCachedTargetPosition;
    ::ll::TypedStorage<4, 4, ::ActorCategory>                    mAttackTypes;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>         mOnAttack;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger>         mOnKill;
    ::ll::TypedStorage<4, 4, float>                              mMeleeFov;
    ::ll::TypedStorage<4, 4, float>                              mMaxRotationX;
    ::ll::TypedStorage<4, 4, float>                              mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, int>                                mRandomStopInterval;
    ::ll::TypedStorage<4, 4, int>                                mAttackTicks;
    ::ll::TypedStorage<4, 4, int>                                mCooldownTicks;
    ::ll::TypedStorage<1, 1, bool>                               mAttackOnce;
    ::ll::TypedStorage<1, 1, bool>                               mHasAttacked;
    ::ll::TypedStorage<1, 1, bool>                               mSetPersistent;
    ::ll::TypedStorage<1, 1, bool>                               mCanSpreadOnFire;
    // NOLINTEND

public:
    // prevent constructor by default
    MeleeAttackBaseGoal& operator=(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal(MeleeAttackBaseGoal const&);
    MeleeAttackBaseGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeAttackBaseGoal() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() = 0;

    // vIndex: 10
    virtual int getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MeleeAttackBaseGoal(::Mob& mob);

    MCAPI void _attemptAttackTarget(::Actor& target, bool canReachTarget, bool hasLineOfSight);

    MCAPI void _attemptMoveToTargetPosition(::Actor const& target, bool canReachTarget, float targetDistanceSq);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCFOLD void $start();

    MCAPI void $stop();

    MCFOLD int $getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
