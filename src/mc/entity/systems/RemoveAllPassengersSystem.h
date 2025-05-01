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
struct VehicleComponent;
// clang-format on

namespace RemoveAllPassengersSystem {
// functions
// NOLINTBEGIN
MCNAPI void removeAllPassengers(
    ::VehicleComponent const&                                                             vehicleComponent,
    bool                                                                                  actorIsBeingDestroyed,
    ::EntityModifier<::ActorIsBeingDestroyedFlagComponent, ::StopRidingRequestComponent>& modifier
);

MCNAPI void tickRemoveAllPassengers(
    ::StrictEntityContext&,
    ::VehicleComponent const&                                                            vehicleComponent,
    ::Optional<::ActorIsBeingDestroyedFlagComponent>                                     actorIsBeingDestroyed,
    ::EntityModifier<::ActorIsBeingDestroyedFlagComponent, ::StopRidingRequestComponent> modifier
);
// NOLINTEND

} // namespace RemoveAllPassengersSystem
