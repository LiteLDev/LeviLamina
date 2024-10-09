#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class WaterAnimalPreAIStepSystem {
public:
    // prevent constructor by default
    WaterAnimalPreAIStepSystem& operator=(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem(WaterAnimalPreAIStepSystem const&);
    WaterAnimalPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doWaterAnimalPreAIStepSystem(class StrictEntityContext const&, class ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickWaterAnimalPreAIStepSystem(class ViewT<
                                                      class StrictEntityContext,
                                                      struct Include<
                                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                                          class FlagComponent<struct WaterAnimalFlag>>,
                                                      class ActorOwnerComponent> view);

    // NOLINTEND
};
