#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace RemoveAllPassengersSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createRequestProcessingSystem();

MCAPI ::TickingSystemWithInfo createRideableComponentRemovalSystem();

MCAPI void removeAllPassengers(
    ::VehicleComponent const&                                                             vehicleComponent,
    bool                                                                                  actorIsBeingDestroyed,
    ::EntityModifier<::ActorIsBeingDestroyedFlagComponent, ::StopRidingRequestComponent>& modifier
);

MCAPI void tickRemoveAllPassengers(
    ::StrictEntityContext&,
    ::VehicleComponent const&                                                            vehicleComponent,
    ::Optional<::ActorIsBeingDestroyedFlagComponent>                                     actorIsBeingDestroyed,
    ::EntityModifier<::ActorIsBeingDestroyedFlagComponent, ::StopRidingRequestComponent> modifier
);
// NOLINTEND

} // namespace RemoveAllPassengersSystem
