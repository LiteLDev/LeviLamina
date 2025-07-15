#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorIsBeingDestroyedFlagComponent;
struct ExitFromPassengerFlagComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace RemoveAllPassengersSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createRideableComponentRemovalSystem();

MCNAPI void removeAllPassengers(
    ::VehicleComponent const& vehicleComponent,
    bool                      actorIsBeingDestroyed,
    bool                      exitFromPassenger,
    ::EntityModifier<
        ::ActorIsBeingDestroyedFlagComponent,
        ::ExitFromPassengerFlagComponent,
        ::StopRidingRequestComponent>& modifier
);

MCNAPI void tickRemoveAllPassengers(
    ::StrictEntityContext&,
    ::VehicleComponent const&                        vehicleComponent,
    ::Optional<::ActorIsBeingDestroyedFlagComponent> actorIsBeingDestroyed,
    ::EntityModifier<
        ::ActorIsBeingDestroyedFlagComponent,
        ::ExitFromPassengerFlagComponent,
        ::StopRidingRequestComponent> modifier
);
// NOLINTEND

} // namespace RemoveAllPassengersSystem
