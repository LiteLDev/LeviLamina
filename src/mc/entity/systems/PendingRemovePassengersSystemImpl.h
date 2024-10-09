#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace PendingRemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void pendingRemovePassengers(
    entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct VehicleComponent>>,
    class StrictEntityContext const&         vehicle,
    struct PendingRemovePassengersComponent& pendingPassengersToRemoveComponent,
    class EntityModifier<
        class FlagComponent<struct ExitFromPassengerFlag>,
        struct PendingRemovePassengersComponent,
        struct RemovePassengersComponent> modifier
);
// NOLINTEND

}; // namespace PendingRemovePassengersSystemImpl
