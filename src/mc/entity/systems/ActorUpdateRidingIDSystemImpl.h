#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct KeepRidingEvenIfTooLargeForVehicleFlagComponent;
struct PassengerComponent;
struct RidingPrevIDComponent;
struct StopRidingRequestComponent;
struct VehicleComponent;
// clang-format on

namespace ActorUpdateRidingIDSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void clearRidingID(
    ::entt::type_list<::Include<::StopRidingRequestComponent>> entity,
    ::StrictEntityContext const&                               modifier,
    ::EntityModifier<::PassengerComponent, ::KeepRidingEvenIfTooLargeForVehicleFlagComponent>
);

MCAPI void updateRidingPrevID(
    ::entt::type_list<::Include<::StopRidingRequestComponent>> entity,
    ::StrictEntityContext const&                               passengerComponent,
    ::PassengerComponent const&                                vehicleView,
    ::ViewT<::StrictEntityContext, ::VehicleComponent const>   modifier,
    ::EntityModifier<::RidingPrevIDComponent>
);
// NOLINTEND

} // namespace ActorUpdateRidingIDSystemImpl
