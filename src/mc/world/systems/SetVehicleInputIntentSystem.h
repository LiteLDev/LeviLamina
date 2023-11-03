#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace SetVehicleInputIntentSystem {
// NOLINTBEGIN
// symbol: ?createSystem@SetVehicleInputIntentSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doTick@SetVehicleInputIntentSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUSynchedActorDataComponent@@AEBV?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@UPassengerComponent@@V?$FlagComponent@UMobFlag@@@@@@V?$Optional@V?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UVehicleInputIntentComponent@@@@@Z
MCAPI void doTick(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct VehicleComponent const&, struct SynchedActorDataComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>, class Optional<class FlagComponent<struct PlayerComponentFlag>>> const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct VehicleInputIntentComponent>);
// NOLINTEND

}; // namespace SetVehicleInputIntentSystem
