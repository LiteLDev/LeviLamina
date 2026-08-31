#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
struct ActorIsBeingDestroyedFlagComponent;
struct ExitFromPassengerFlagComponent;
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
    ::VehicleComponent const& vehicleComponent,
    bool                      actorIsBeingDestroyed,
    bool                      exitFromPassenger,
    ::EntityModifier<
        ::ActorIsBeingDestroyedFlagComponent,
        ::ExitFromPassengerFlagComponent,
        ::StopRidingRequestComponent>& modifier
);
// NOLINTEND

} // namespace RemoveAllPassengersSystem
