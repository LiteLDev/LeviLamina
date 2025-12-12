#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/PetSleepWithOwnerState.h"

class RotateState : public ::PetSleepWithOwnerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk344b15;
    ::ll::UntypedStorage<4, 4> mUnk6f6bea;
    // NOLINTEND

public:
    // prevent constructor by default
    RotateState& operator=(RotateState const&);
    RotateState(RotateState const&);
    RotateState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick() /*override*/;

    virtual ~RotateState() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
