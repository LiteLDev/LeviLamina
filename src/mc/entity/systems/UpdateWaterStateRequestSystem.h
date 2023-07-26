#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateWaterStateRequestSystem {

public:
    // prevent constructor by default
    UpdateWaterStateRequestSystem& operator=(UpdateWaterStateRequestSystem const&) = delete;
    UpdateWaterStateRequestSystem(UpdateWaterStateRequestSystem const&)            = delete;
    UpdateWaterStateRequestSystem()                                                = delete;

public:
    /**
     * @symbol ?createSystem\@UpdateWaterStateRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
