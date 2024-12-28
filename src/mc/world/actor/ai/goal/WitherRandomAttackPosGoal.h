#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RandomStrollGoal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class WitherRandomAttackPosGoal : public ::RandomStrollGoal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7c6ae6;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherRandomAttackPosGoal& operator=(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal(WitherRandomAttackPosGoal const&);
    WitherRandomAttackPosGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 0
    virtual ~WitherRandomAttackPosGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WitherRandomAttackPosGoal(::Mob& mob, float speed, int xzDist, int yDist);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Mob& mob, float speed, int xzDist, int yDist);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI void $stop();

    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
