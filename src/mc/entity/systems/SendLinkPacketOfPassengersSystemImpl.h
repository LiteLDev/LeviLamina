#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorUniqueIDComponent;
struct BoatMovementComponent;
struct PassengerComponent;
struct PassengersChangedFlagComponent;
struct SendPacketsComponent;
struct VehicleComponent;
// clang-format on

namespace SendLinkPacketOfPassengersSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void sendLinkPacketOfPassengers(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::PassengersChangedFlagComponent>> entity,
    ::StrictEntityContext const&              vehicleUniqueIDComponent,
    ::ActorUniqueIDComponent const&           vehicleComponent,
    ::VehicleComponent&                       boatMovement,
    ::Optional<::BoatMovementComponent const> modifier,
    ::EntityModifier<::SendPacketsComponent>  passengersView,
    ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent>, ::ActorUniqueIDComponent const>
);
// NOLINTEND

} // namespace SendLinkPacketOfPassengersSystemImpl
