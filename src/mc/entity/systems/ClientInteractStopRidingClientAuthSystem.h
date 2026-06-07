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
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tick(
    ::entt::type_list<
        ::Include<::LocalPlayerComponent, ::StopRidingRequestComponent>,
        ::Exclude<::ActorRemovedFlagComponent, ::SwitchingVehiclesFlagComponent>> entity,
    ::StrictEntityContext const&                                                  passengerComponent,
    ::PassengerComponent const&                                                   stateVectorComponent,
    ::StateVectorComponent const&                                                 modifier,
    ::EntityModifier<::SendPacketsComponent>                                      vehicleView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent>,
        ::Exclude<::DoesServerAuthOnlyDismountFlagComponent>,
        ::RuntimeIDComponent const>
);
// NOLINTEND

} // namespace ClientInteractStopRidingClientAuthSystem
