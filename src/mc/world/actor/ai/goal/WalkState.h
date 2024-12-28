#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class WalkState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    WalkState& operator=(WalkState const&);
    WalkState(WalkState const&);
    WalkState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~WalkState() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
