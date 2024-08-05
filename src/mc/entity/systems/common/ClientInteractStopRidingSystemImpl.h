#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ClientInteractStopRidingSystemImpl {
// NOLINTBEGIN
MCAPI void tick(entt::type_list<struct Include<class FlagComponent<struct LocalPlayerComponentFlag>, class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class StrictEntityContext const&, struct PassengerComponent const&, struct StateVectorComponent const&, class EntityModifier<struct SendPacketsComponent>, class ViewT<class StrictEntityContext, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>);
// NOLINTEND

}; // namespace ClientInteractStopRidingSystemImpl
