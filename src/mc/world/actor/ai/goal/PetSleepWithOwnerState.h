#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerState {
public:
    // prevent constructor by default
    PetSleepWithOwnerState& operator=(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState(PetSleepWithOwnerState const&);
    PetSleepWithOwnerState();

public:
    // NOLINTBEGIN
    MCVAPI void start();

    MCVAPI void stop();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void dampenSpeed();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void start$();

    MCAPI void stop$();

    // NOLINTEND
};
