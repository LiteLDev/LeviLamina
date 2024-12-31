#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class SleepState : public ::PetSleepWithOwnerState {
public:
    // prevent constructor by default
    SleepState& operator=(SleepState const&);
    SleepState(SleepState const&);
    SleepState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void stop() /*override*/;

    // vIndex: 1
    virtual void tick() /*override*/;

    // vIndex: 0
    virtual ~SleepState() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $stop();

    MCAPI void $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
