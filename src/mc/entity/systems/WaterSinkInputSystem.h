#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

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

    // symbol:
    // ?tickWaterSinkInputSystem@WaterSinkInputSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UPlayerInputRequestComponent@@V?$FlagComponent@UInWaterFlag@@@@@@$$CBUMovementAbilitiesComponent@@$$CBUMoveInputComponent@@UStateVectorComponent@@@@@Z
    MCAPI static void tickWaterSinkInputSystem(class ViewT<
                                               class StrictEntityContext,
                                               struct Include<
                                                   class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                   struct PlayerInputRequestComponent,
                                                   class FlagComponent<struct InWaterFlag>>,
                                               struct MovementAbilitiesComponent const,
                                               struct MoveInputComponent const,
                                               struct StateVectorComponent> view);

    // NOLINTEND
};
