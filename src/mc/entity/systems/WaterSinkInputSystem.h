#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class WaterSinkInputSystem {
public:
    // prevent constructor by default
    WaterSinkInputSystem& operator=(WaterSinkInputSystem const&);
    WaterSinkInputSystem(WaterSinkInputSystem const&);
    WaterSinkInputSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createWaterSinkInputSystem();

    MCAPI static void doInWaterSinkInputSystem(
        struct MovementAbilitiesComponent const& abilitiesComponent,
        struct MoveInputComponent const&         moveInputComponent,
        struct StateVectorComponent&             stateVectorComponent
    );

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
