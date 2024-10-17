#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ClientInteractStopRidingSystemImpl {
// NOLINTBEGIN
MCAPI void tick(
    entt::type_list<
        struct Include<
            class FlagComponent<struct LocalPlayerComponentFlag>,
            class FlagComponent<struct StopRidingRequestFlag>>,
        struct Exclude<
            class FlagComponent<struct ActorRemovedFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>>,
    class StrictEntityContext const&                  entity,
    struct PassengerComponent const&                  passengerComponent,
    struct StateVectorComponent const&                stateVectorComponent,
    class EntityModifier<struct SendPacketsComponent> modifier,
    class ViewT<class StrictEntityContext, struct Include<struct VehicleComponent>, struct RuntimeIDComponent const>
        vehicleView
);
// NOLINTEND

}; // namespace ClientInteractStopRidingSystemImpl
