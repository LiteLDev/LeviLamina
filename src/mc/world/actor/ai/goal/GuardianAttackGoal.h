#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

// auto generated forward declare list
// clang-format off
class Mob;
// clang-format on

class GuardianAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke84967;
    ::ll::UntypedStorage<4, 4> mUnkfba32c;
    ::ll::UntypedStorage<4, 4> mUnk537304;
    ::ll::UntypedStorage<4, 4> mUnk6eaa96;
    ::ll::UntypedStorage<4, 4> mUnkafeca2;
    ::ll::UntypedStorage<4, 4> mUnk8ecbce;
    ::ll::UntypedStorage<4, 4> mUnk68a445;
    ::ll::UntypedStorage<4, 4> mUnkcbc051;
    ::ll::UntypedStorage<4, 4> mUnkd6ec0f;
    ::ll::UntypedStorage<1, 1> mUnk8baa5f;
    // NOLINTEND

public:
    // prevent constructor by default
    GuardianAttackGoal& operator=(GuardianAttackGoal const&);
    GuardianAttackGoal(GuardianAttackGoal const&);
    GuardianAttackGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~GuardianAttackGoal() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GuardianAttackGoal(::Mob& mob);
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

    MCAPI void $tick();

    MCAPI void $stop();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
