#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace ClientInteractStopRidingSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?tick\@ClientInteractStopRidingSystemImpl\@\@YAXU?$type_list\@U?$Include\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@entt\@\@AEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBURuntimeIDComponent\@\@\@\@\@Z
 */
MCAPI void
tick(entt::type_list<struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class StrictEntityContext const&, struct PassengerComponent const&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>);
// NOLINTEND

}; // namespace ClientInteractStopRidingSystemImpl
