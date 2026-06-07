#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ExitFromPassengerFlagComponent;
struct InterpolateMovementNeededComponent;
struct PendingRemovePassengersComponent;
struct RemovePassengersComponent;
struct VehicleComponent;
// clang-format on

namespace PendingRemovePassengersSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void pendingRemovePassengers(
    ::entt::type_list<::Include<::InterpolateMovementNeededComponent, ::VehicleComponent>> vehicle,
    ::StrictEntityContext const&        pendingPassengersToRemoveComponent,
    ::PendingRemovePassengersComponent& modifier,
    ::EntityModifier<::ExitFromPassengerFlagComponent, ::PendingRemovePassengersComponent, ::RemovePassengersComponent>
);
// NOLINTEND

} // namespace PendingRemovePassengersSystemImpl
