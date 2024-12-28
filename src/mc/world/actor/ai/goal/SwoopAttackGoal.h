#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class SwoopAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk24e2ca;
    ::ll::UntypedStorage<1, 1> mUnk529446;
    ::ll::UntypedStorage<4, 4> mUnke01680;
    ::ll::UntypedStorage<4, 4> mUnk99dafa;
    ::ll::UntypedStorage<4, 4> mUnke568a0;
    ::ll::UntypedStorage<4, 8> mUnkee7b7f;
    // NOLINTEND

public:
    // prevent constructor by default
    SwoopAttackGoal& operator=(SwoopAttackGoal const&);
    SwoopAttackGoal(SwoopAttackGoal const&);
    SwoopAttackGoal();

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

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SwoopAttackGoal() /*override*/;
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

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
