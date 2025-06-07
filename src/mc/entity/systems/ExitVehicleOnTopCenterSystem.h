#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class RideableComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorSetPositionRequestComponent;
struct DoesServerAuthOnlyDismountFlagComponent;
struct OffsetsComponent;
struct PassengerComponent;
struct TeleportToRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace ExitVehicleOnTopCenterSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createMakeNonPlayerPassengerExitSystem();

MCNAPI ::TickingSystemWithInfo createMakePlayerPassengerExitSystem();

MCNAPI void makeNonPlayerPassengerExit(
    ::StrictEntityContext const& entity,
    ::PassengerComponent const&  passengerComponent,
    ::OffsetsComponent const&    offsetsComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>,
        ::RideableComponent const,
        ::AABBShapeComponent const>                       vehicleView,
    ::EntityModifier<::ActorSetPositionRequestComponent>& modifier
);

MCNAPI void makePlayerPassengerExit(
    ::StrictEntityContext const& entity,
    ::PassengerComponent const&  passengerComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent, ::DoesServerAuthOnlyDismountFlagComponent>,
        ::RideableComponent const,
        ::AABBShapeComponent const>                 vehicleView,
    ::EntityModifier<::TeleportToRequestComponent>& modifier
);
// NOLINTEND

} // namespace ExitVehicleOnTopCenterSystem
