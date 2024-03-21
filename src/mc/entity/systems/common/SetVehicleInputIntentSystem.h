#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SetVehicleInputIntentSystem {
// NOLINTBEGIN
// symbol: ?createSystem@SetVehicleInputIntentSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?doSetVehicleInputIntent@SetVehicleInputIntentSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUVehicleComponent@@AEBUActorDataFlagComponent@@AEBUActorDataControllingSeatIndexComponent@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@UPassengerComponent@@V?$FlagComponent@UMobFlag@@@@@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@V?$FlagComponent@UShouldBeSimulatedFlag@@@@@@V?$EntityModifier@UVehicleInputIntentComponent@@@@@Z
MCAPI void doSetVehicleInputIntent(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct VehicleComponent const&, struct ActorDataFlagComponent const&, struct ActorDataControllingSeatIndexComponent const&, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, class FlagComponent<struct ShouldBeSimulatedFlag>> const&, class EntityModifier<struct VehicleInputIntentComponent>);
// NOLINTEND

}; // namespace SetVehicleInputIntentSystem
