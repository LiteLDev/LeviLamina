#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class PassengerFreezeMovementSystem {
public:
    // prevent constructor by default
    PassengerFreezeMovementSystem& operator=(PassengerFreezeMovementSystem const&);
    PassengerFreezeMovementSystem(PassengerFreezeMovementSystem const&);
    PassengerFreezeMovementSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void freezeMovement(class StrictEntityContext&, struct StateVectorComponent& stateVector);

    MCAPI static void tickPassengerFreezeMovementSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct PassengerComponent, class FlagComponent<struct ActorMovementTickNeededFlag>>,
            struct StateVectorComponent> view
    );

    // NOLINTEND
};
