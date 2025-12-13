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
    virtual ~PetSleepWithOwnerState() = default;

    virtual void tick();

    virtual void start();

    virtual void stop();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void dampenSpeed();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $start();

    MCNAPI void $stop();


    // NOLINTEND
};
