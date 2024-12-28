#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

class RangedAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk720b98;
    ::ll::UntypedStorage<8, 40> mUnkcdef5d;
    ::ll::UntypedStorage<1, 1>  mUnk50dcd7;
    ::ll::UntypedStorage<1, 1>  mUnk420462;
    ::ll::UntypedStorage<1, 1>  mUnk6a2d5e;
    ::ll::UntypedStorage<1, 1>  mUnk35e1b3;
    ::ll::UntypedStorage<4, 4>  mUnk7084c9;
    ::ll::UntypedStorage<4, 4>  mUnk360d8c;
    ::ll::UntypedStorage<4, 4>  mUnked2c84;
    ::ll::UntypedStorage<4, 4>  mUnk2aa8ba;
    ::ll::UntypedStorage<4, 4>  mUnkf9c8ee;
    ::ll::UntypedStorage<4, 4>  mUnk5a5b51;
    ::ll::UntypedStorage<4, 4>  mUnk104bfa;
    ::ll::UntypedStorage<4, 4>  mUnk83516f;
    ::ll::UntypedStorage<4, 4>  mUnk93b981;
    ::ll::UntypedStorage<4, 4>  mUnke4b49b;
    ::ll::UntypedStorage<4, 4>  mUnk6f2827;
    ::ll::UntypedStorage<4, 4>  mUnk21af5d;
    ::ll::UntypedStorage<4, 4>  mUnk662d3e;
    ::ll::UntypedStorage<4, 4>  mUnk3facd5;
    ::ll::UntypedStorage<4, 4>  mUnkd2c270;
    ::ll::UntypedStorage<4, 4>  mUnka2860a;
    ::ll::UntypedStorage<4, 4>  mUnk856bf2;
    ::ll::UntypedStorage<4, 4>  mUnkf0ea33;
    ::ll::UntypedStorage<4, 4>  mUnkf79d45;
    // NOLINTEND

public:
    // prevent constructor by default
    RangedAttackGoal& operator=(RangedAttackGoal const&);
    RangedAttackGoal(RangedAttackGoal const&);
    RangedAttackGoal();

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
    virtual ~RangedAttackGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _dischargeCarriedItem();

    MCAPI void
    handleAttackBehavior(::Actor* lockedTarget, ::Vec3 const& lockedTargetPos, float targetDistanceSq, bool canSee);
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

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
