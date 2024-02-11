#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace RemoveAllPassengersSystem {
// NOLINTBEGIN
// symbol: ?createRequestProcessingSystem@RemoveAllPassengersSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createRequestProcessingSystem();

// symbol: ?createRideableComponentRemovalSystem@RemoveAllPassengersSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createRideableComponentRemovalSystem();

// symbol:
// ?removeAllPassengers@RemoveAllPassengersSystem@@YAXAEBUVehicleComponent@@_NAEAV?$EntityModifier@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
MCAPI void
removeAllPassengers(struct VehicleComponent const&, bool, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>&);

// symbol:
// ?tickRemoveAllPassengers@RemoveAllPassengersSystem@@YAXAEAVStrictEntityContext@@AEBUVehicleComponent@@V?$Optional@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@V?$EntityModifier@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
MCAPI void
tickRemoveAllPassengers(class StrictEntityContext&, struct VehicleComponent const&, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>);
// NOLINTEND

}; // namespace RemoveAllPassengersSystem
