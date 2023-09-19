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
    // symbol: ?start@PetSleepWithOwnerState@@UEAAXXZ
    MCVAPI void start();

    // symbol: ?stop@PetSleepWithOwnerState@@UEAAXXZ
    MCVAPI void stop();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?dampenSpeed@PetSleepWithOwnerState@@IEAAXXZ
    MCAPI void dampenSpeed();

    // NOLINTEND
};
