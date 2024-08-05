#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace PendingRemovePassengersSystemImpl {
// NOLINTBEGIN
MCAPI void
pendingRemovePassengers(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct VehicleComponent>>, class StrictEntityContext const&, struct PendingRemovePassengersComponent&, class EntityModifier<class FlagComponent<struct ExitFromPassengerFlag>, struct PendingRemovePassengersComponent, struct RemovePassengersComponent>);
// NOLINTEND

}; // namespace PendingRemovePassengersSystemImpl
