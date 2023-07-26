#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerState {

public:
    // prevent constructor by default
    PetSleepWithOwnerState& operator=(PetSleepWithOwnerState const&) = delete;
    PetSleepWithOwnerState(PetSleepWithOwnerState const&)            = delete;
    PetSleepWithOwnerState()                                         = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PETSLEEPWITHOWNERSTATE
    /**
     * @symbol ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    MCVAPI void start(); // NOLINT
    /**
     * @symbol ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    MCVAPI void stop(); // NOLINT
#endif

    // protected:
    /**
     * @symbol ?dampenSpeed\@PetSleepWithOwnerState\@\@IEAAXXZ
     */
    MCAPI void dampenSpeed(); // NOLINT

protected:
};
