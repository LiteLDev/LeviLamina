#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace RemoveAllPassengersSystemImpl {
// NOLINTBEGIN
// symbol:
// ?tickRemoveAllPassengers@RemoveAllPassengersSystemImpl@@YAXAEBUVehicleComponent@@V?$Optional@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@AEAV?$EntityModifier@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@UStopRidingRequestFlag@@@@@@@Z
MCAPI void
tickRemoveAllPassengers(struct VehicleComponent const&, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag>>, class EntityModifier<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct StopRidingRequestFlag>>&);
// NOLINTEND

}; // namespace RemoveAllPassengersSystemImpl
