#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class WaterAnimalPreAIStepSystem {
public:
    // prevent constructor by default
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@WaterAnimalPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doWaterAnimalPreAIStepSystem@WaterAnimalPreAIStepSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _doWaterAnimalPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent&);

    // symbol:
    // ?_tickWaterAnimalPreAIStepSystem@WaterAnimalPreAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UWaterAnimalFlag@@@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void _tickWaterAnimalPreAIStepSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          class FlagComponent<struct WaterAnimalFlag>>,
                                                      class ActorOwnerComponent> view);

    // NOLINTEND
};
