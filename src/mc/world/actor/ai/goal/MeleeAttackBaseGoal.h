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
        ::ll::UntypedStorage<8, 8> mUnk44eb04;
        ::ll::UntypedStorage<4, 4> mUnk683a7b;
        ::ll::UntypedStorage<4, 4> mUnk59707a;
        ::ll::UntypedStorage<4, 4> mUnk56002d;
        ::ll::UntypedStorage<4, 4> mUnk214efe;
        ::ll::UntypedStorage<4, 4> mUnk6d7a31;
        ::ll::UntypedStorage<4, 4> mUnk50af2b;
        ::ll::UntypedStorage<4, 4> mUnk14c021;
        ::ll::UntypedStorage<4, 4> mUnk8929b8;
        ::ll::UntypedStorage<4, 4> mUnkaf621b;
        ::ll::UntypedStorage<1, 1> mUnkde00d6;
        ::ll::UntypedStorage<1, 1> mUnk74162c;
        // NOLINTEND

    public:
        // prevent constructor by default
        Navigation& operator=(Navigation const&);
        Navigation(Navigation const&);
        Navigation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Navigation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    virtual ~MeleeAttackBaseGoal() /*override*/;

    virtual bool canUse() /*override*/;

    virtual bool canContinueToUse() /*override*/;

    virtual void start() /*override*/;

    virtual void stop() /*override*/;

    virtual void tick() = 0;

    virtual int getAttackTicksResetValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MeleeAttackBaseGoal(::Mob& mob);

    MCNAPI void _attemptAttackTarget(::Actor& target, bool canReachTarget, bool hasLineOfSight);

    MCNAPI void _attemptMoveToTargetPosition(::Actor const& target, bool canReachTarget, float targetDistanceSq);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Mob& mob);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI int $getAttackTicksResetValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
