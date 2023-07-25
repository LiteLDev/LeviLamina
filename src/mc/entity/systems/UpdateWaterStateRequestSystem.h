#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateWaterStateRequestSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEWATERSTATEREQUESTSYSTEM
public:
    UpdateWaterStateRequestSystem& operator=(UpdateWaterStateRequestSystem const&) = delete;
    UpdateWaterStateRequestSystem(UpdateWaterStateRequestSystem const&)            = delete;
    UpdateWaterStateRequestSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@UpdateWaterStateRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
