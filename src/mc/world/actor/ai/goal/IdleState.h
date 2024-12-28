#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class IdleState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    IdleState& operator=(IdleState const&);
    IdleState(IdleState const&);
    IdleState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void start() /*override*/;

    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~IdleState() /*override*/;
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

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
