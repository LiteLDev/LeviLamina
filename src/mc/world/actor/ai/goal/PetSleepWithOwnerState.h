#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PetSleepWithOwnerState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PETSLEEPWITHOWNERSTATE
public:
    PetSleepWithOwnerState& operator=(PetSleepWithOwnerState const&) = delete;
    PetSleepWithOwnerState(PetSleepWithOwnerState const&)            = delete;
    PetSleepWithOwnerState()                                         = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PETSLEEPWITHOWNERSTATE
    /**
     * @symbol ?start\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    MCVAPI void start();
    /**
     * @symbol ?stop\@PetSleepWithOwnerState\@\@UEAAXXZ
     */
    MCVAPI void stop();
#endif

    // protected:
    /**
     * @symbol ?dampenSpeed\@PetSleepWithOwnerState\@\@IEAAXXZ
     */
    MCAPI void dampenSpeed();

protected:
};
