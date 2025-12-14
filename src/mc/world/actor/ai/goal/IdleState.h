#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class IdleState : public ::PetSleepWithOwnerState {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void start() /*override*/;

    virtual void tick() /*override*/;

    virtual ~IdleState() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCFOLD void $tick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
