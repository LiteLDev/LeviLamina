#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace RemoveAllPassengersSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createRequestProcessingSystem();

MCAPI struct TickingSystemWithInfo createRideableComponentRemovalSystem();

MCAPI void
removeAllPassengers(struct VehicleComponent const&, bool, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>&);

MCAPI void
tickRemoveAllPassengers(class StrictEntityContext&, struct VehicleComponent const&, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>);
// NOLINTEND

}; // namespace RemoveAllPassengersSystem
