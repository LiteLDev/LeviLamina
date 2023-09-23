#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace PendingRemovePassengersSystemImpl {
// NOLINTBEGIN
// symbol:
// ?pendingRemovePassengers@PendingRemovePassengersSystemImpl@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UVehicleComponent@@@@@entt@@AEBVStrictEntityContext@@AEAUPendingRemovePassengersComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UExitFromPassengerFlag@@@@UPendingRemovePassengersComponent@@URemovePassengersComponent@@@@@Z
MCAPI void pendingRemovePassengers(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct VehicleComponent>>, class StrictEntityContext const&, struct PendingRemovePassengersComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ExitFromPassengerFlag>, struct PendingRemovePassengersComponent, struct RemovePassengersComponent>);
// NOLINTEND

}; // namespace PendingRemovePassengersSystemImpl
