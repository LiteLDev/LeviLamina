#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class SlimeAttackGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk5cb9d7;
    ::ll::UntypedStorage<4, 4> mUnkfcd2fe;
    ::ll::UntypedStorage<4, 4> mUnk98fe05;
    ::ll::UntypedStorage<4, 4> mUnk97fb30;
    ::ll::UntypedStorage<4, 4> mUnkb444d7;
    ::ll::UntypedStorage<4, 4> mUnka3dbde;
    ::ll::UntypedStorage<4, 4> mUnk9b49f7;
    // NOLINTEND

public:
    // prevent constructor by default
    SlimeAttackGoal& operator=(SlimeAttackGoal const&);
    SlimeAttackGoal(SlimeAttackGoal const&);
    SlimeAttackGoal();

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

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SlimeAttackGoal() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canUse();

    MCAPI bool $canContinueToUse();

    MCAPI void $start();

    MCAPI void $tick();

    MCAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
