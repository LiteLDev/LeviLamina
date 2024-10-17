#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class RemovePassengersWithoutSeatSystem {
public:
    // prevent constructor by default
    RemovePassengersWithoutSeatSystem& operator=(RemovePassengersWithoutSeatSystem const&);
    RemovePassengersWithoutSeatSystem(RemovePassengersWithoutSeatSystem const&);
    RemovePassengersWithoutSeatSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void removePassengersWithoutSeat(
        class StrictEntityContext&,
        class RideableComponent const&                                           rideableComponent,
        struct VehicleComponent&                                                 vehicleComponent,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>>& modifier
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _tickRemovePassengersWithoutSeat(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
            class RideableComponent const,
            struct VehicleComponent>                                            view,
        class EntityModifier<class FlagComponent<struct StopRidingRequestFlag>> modifier
    );

    // NOLINTEND
};
