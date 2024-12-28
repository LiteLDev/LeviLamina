#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/Goal.h"

class FindUnderwaterTreasureGoal : public ::Goal {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7ef50e;
    ::ll::UntypedStorage<4, 12> mUnk174d65;
    ::ll::UntypedStorage<4, 12> mUnkad7044;
    ::ll::UntypedStorage<4, 4>  mUnk859e17;
    ::ll::UntypedStorage<4, 4>  mUnk54cf83;
    ::ll::UntypedStorage<4, 4>  mUnkd55f80;
    ::ll::UntypedStorage<4, 4>  mUnk22cdd1;
    ::ll::UntypedStorage<4, 4>  mUnk3e9dad;
    ::ll::UntypedStorage<4, 4>  mUnk10335f;
    ::ll::UntypedStorage<4, 4>  mUnkbd7f3e;
    // NOLINTEND

public:
    // prevent constructor by default
    FindUnderwaterTreasureGoal& operator=(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal(FindUnderwaterTreasureGoal const&);
    FindUnderwaterTreasureGoal();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 3
    virtual bool canBeInterrupted() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~FindUnderwaterTreasureGoal() /*override*/;
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

    MCAPI bool $canBeInterrupted();

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
