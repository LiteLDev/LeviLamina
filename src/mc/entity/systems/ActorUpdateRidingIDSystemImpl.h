#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct PassengerComponent;
struct RidingPrevIDComponent;
struct StopRidingRequestComponent;
struct VehicleComponent;
// clang-format on

namespace ActorUpdateRidingIDSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void updateRidingPrevID(
    ::entt::type_list<::Include<::StopRidingRequestComponent>>,
    ::StrictEntityContext const&                             entity,
    ::PassengerComponent const&                              passengerComponent,
    ::ViewT<::StrictEntityContext, ::VehicleComponent const> vehicleView,
    ::EntityModifier<::RidingPrevIDComponent>                modifier
);
// NOLINTEND

} // namespace ActorUpdateRidingIDSystemImpl
