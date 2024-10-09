#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorUpdateRidingIDSystemImpl {
// NOLINTBEGIN
MCAPI void updateRidingPrevID(
    entt::type_list<struct Include<class FlagComponent<struct StopRidingRequestFlag>>>,
    class StrictEntityContext const&                                      entity,
    struct PassengerComponent const&                                      passengerComponent,
    class ViewT<class StrictEntityContext, struct VehicleComponent const> vehicleView,
    class EntityModifier<struct RidingPrevIDComponent>                    modifier
);
// NOLINTEND

}; // namespace ActorUpdateRidingIDSystemImpl
