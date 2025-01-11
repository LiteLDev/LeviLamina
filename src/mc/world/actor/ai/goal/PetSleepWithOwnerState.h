#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6df5f9;
    // NOLINTEND

public:
    // prevent constructor by default
    PetSleepWithOwnerState& operator=(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PetSleepWithOwnerState() = default;

    // vIndex: 1
    virtual void tick();

    // vIndex: 2
    virtual void start();

    // vIndex: 3
    virtual void stop();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $start();

    MCAPI void $stop();
    // NOLINTEND
};
