#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityId;
struct ActorIsBeingDestroyedFlagComponent;
struct ExitFromPassengerFlagComponent;
struct StopRidingRequestComponent;
struct VehicleComponent;
// clang-format on

namespace RemoveAllPassengersSystem {
// functions
// NOLINTBEGIN
MCAPI void removeAllPassengers(
    ::VehicleComponent const& vehicleComponent,
    bool                      actorIsBeingDestroyed,
    bool                      exitFromPassenger,
    ::EntityModifier<
        ::EntityId,
        ::ActorIsBeingDestroyedFlagComponent,
        ::ExitFromPassengerFlagComponent,
        ::StopRidingRequestComponent> const& modifier
);
// NOLINTEND

} // namespace RemoveAllPassengersSystem
