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
MCNAPI void sendLinkPacketOfPassengers(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent, ::PassengersChangedFlagComponent>>,
    ::StrictEntityContext const&              entity,
    ::ActorUniqueIDComponent const&           vehicleUniqueIDComponent,
    ::VehicleComponent&                       vehicleComponent,
    ::Optional<::BoatMovementComponent const> boatMovement,
    ::EntityModifier<::SendPacketsComponent>  modifier,
    ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent>, ::ActorUniqueIDComponent const> passengersView
);
// NOLINTEND

} // namespace SendLinkPacketOfPassengersSystemImpl
