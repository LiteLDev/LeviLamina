#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ExitFromPassengerFlagComponent;
struct PendingRemovePassengersComponent;
struct RemovePassengersComponent;
struct VehicleComponent;
// clang-format on

namespace PendingRemovePassengersSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void pendingRemovePassengers(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::VehicleComponent>>,
    ::StrictEntityContext const&        vehicle,
    ::PendingRemovePassengersComponent& pendingPassengersToRemoveComponent,
    ::EntityModifier<::ExitFromPassengerFlagComponent, ::PendingRemovePassengersComponent, ::RemovePassengersComponent>
        modifier
);
// NOLINTEND

} // namespace PendingRemovePassengersSystemImpl
