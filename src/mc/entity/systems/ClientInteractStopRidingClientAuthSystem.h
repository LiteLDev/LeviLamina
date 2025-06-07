#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRemovedFlagComponent;
struct DoesServerAuthOnlyDismountFlagComponent;
struct LocalPlayerComponent;
struct PassengerComponent;
struct RuntimeIDComponent;
struct SendPacketsComponent;
struct StateVectorComponent;
struct StopRidingRequestComponent;
struct SwitchingVehiclesFlagComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace ClientInteractStopRidingClientAuthSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void tick(
    ::entt::type_list<
        ::Include<::LocalPlayerComponent, ::StopRidingRequestComponent>,
        ::Exclude<::ActorRemovedFlagComponent, ::SwitchingVehiclesFlagComponent>>,
    ::StrictEntityContext const&             entity,
    ::PassengerComponent const&              passengerComponent,
    ::StateVectorComponent const&            stateVectorComponent,
    ::EntityModifier<::SendPacketsComponent> modifier,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent>,
        ::Exclude<::DoesServerAuthOnlyDismountFlagComponent>,
        ::RuntimeIDComponent const> vehicleView
);
// NOLINTEND

} // namespace ClientInteractStopRidingClientAuthSystem
