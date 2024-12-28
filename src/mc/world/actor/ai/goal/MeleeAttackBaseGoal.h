#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Mob;
// clang-format on

class MeleeAttackBaseGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk59f8cc;
    ::ll::UntypedStorage<8, 40>  mUnkf2f7cd;
    ::ll::UntypedStorage<1, 1>   mUnk5c333a;
    ::ll::UntypedStorage<1, 1>   mUnk69d52c;
    ::ll::UntypedStorage<1, 1>   mUnk266b38;
    ::ll::UntypedStorage<1, 1>   mUnkb14d3e;
    ::ll::UntypedStorage<4, 4>   mUnkcc644d;
    ::ll::UntypedStorage<4, 4>   mUnk4cdcd2;
    ::ll::UntypedStorage<4, 4>   mUnkd0ec55;
    ::ll::UntypedStorage<4, 4>   mUnkb76b19;
    ::ll::UntypedStorage<4, 4>   mUnkcb73c3;
    ::ll::UntypedStorage<4, 4>   mUnk374000;
    ::ll::UntypedStorage<4, 4>   mUnk1b596c;
    ::ll::UntypedStorage<4, 4>   mUnk667b04;
    ::ll::UntypedStorage<4, 4>   mUnk818707;
    ::ll::UntypedStorage<4, 4>   mUnke18385;
    ::ll::UntypedStorage<4, 4>   mUnkd2de46;
    ::ll::UntypedStorage<4, 4>   mUnk759163;
    ::ll::UntypedStorage<4, 4>   mUnk1811ad;
    ::ll::UntypedStorage<4, 4>   mUnk2b5c6e;
    ::ll::UntypedStorage<4, 4>   mUnk2faf76;
    ::ll::UntypedStorage<8, 8>   mUnk6cc37f;
    ::ll::UntypedStorage<4, 12>  mUnkaec9e6;
    ::ll::UntypedStorage<4, 4>   mUnk6e7da4;
    ::ll::UntypedStorage<8, 104> mUnkd0d210;
    ::ll::UntypedStorage<8, 104> mUnk3cc41b;
    ::ll::UntypedStorage<1, 1>   mUnk44ccf2;
    ::ll::UntypedStorage<1, 1>   mUnka20ec9;
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
    virtual void _attemptMoveToTarget(::Actor& target);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MeleeAttackBaseGoal(::Mob& mob);

    MCAPI void _attemptAttackTarget(::Actor& target, bool canReachTarget, bool hasLineOfSight);

    MCAPI void _attemptMoveToTargetPosition(::Actor& target, bool canReachTarget, float targetDistanceSq);

    MCAPI float _getTargetDistanceSqXZ(::Actor const& target) const;
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

    MCAPI void $start();

    MCAPI void $stop();

    MCAPI void $_attemptMoveToTarget(::Actor& target);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
