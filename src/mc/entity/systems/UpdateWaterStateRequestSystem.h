#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateWaterStateRequestSystem {
public:
    // prevent constructor by default
    UpdateWaterStateRequestSystem& operator=(UpdateWaterStateRequestSystem const&);
    UpdateWaterStateRequestSystem(UpdateWaterStateRequestSystem const&);
    UpdateWaterStateRequestSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@UpdateWaterStateRequestSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
