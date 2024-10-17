#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace RemoveAllPassengersSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createRequestProcessingSystem();

MCAPI struct TickingSystemWithInfo createRideableComponentRemovalSystem();

MCAPI void removeAllPassengers(
    struct VehicleComponent const& vehicleComponent,
    bool                           actorIsBeingDestroyed,
    class EntityModifier<
        class FlagComponent<struct ActorIsBeingDestroyedFlag>,
        class FlagComponent<struct StopRidingRequestFlag>>& modifier
);

MCAPI void tickRemoveAllPassengers(
    class StrictEntityContext&,
    struct VehicleComponent const&                                        vehicleComponent,
    class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>> actorIsBeingDestroyed,
    class EntityModifier<
        class FlagComponent<struct ActorIsBeingDestroyedFlag>,
        class FlagComponent<struct StopRidingRequestFlag>> modifier
);
// NOLINTEND

}; // namespace RemoveAllPassengersSystem
