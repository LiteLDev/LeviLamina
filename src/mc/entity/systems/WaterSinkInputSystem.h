#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaterSinkInputSystem {
public:
    // prevent constructor by default
    WaterSinkInputSystem& operator=(WaterSinkInputSystem const&);
    WaterSinkInputSystem(WaterSinkInputSystem const&);
    WaterSinkInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createWaterSinkInputSystem@WaterSinkInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createWaterSinkInputSystem();

    // symbol:
    // ?doInWaterSinkInputSystem@WaterSinkInputSystem@@SAXAEBUMovementAbilitiesComponent@@AEBUMoveInputComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    doInWaterSinkInputSystem(struct MovementAbilitiesComponent const&, struct MoveInputComponent const&, struct StateVectorComponent&);

    // NOLINTEND
};
