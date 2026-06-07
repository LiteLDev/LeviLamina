#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct BoatFlagComponent;
struct ExitFromPassengerFlagComponent;
struct InterpolateMovementNeededComponent;
struct LocalPlayerComponent;
struct MobFlagComponent;
struct MobIsJumpingFlagComponent;
struct MovementAttributesComponent;
struct PassengerComponent;
struct StopRidingRequestComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

namespace TryExitVehicleSystem {
// functions
// NOLINTBEGIN
MCAPI void _tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent, ::LocalPlayerComponent, ::MobIsJumpingFlagComponent>,
        ::PassengerComponent const> view,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::Exclude<::BoatFlagComponent>,
        ::Optional<::MobFlagComponent const>,
        ::MovementAttributesComponent const,
        ::VehicleComponent const,
        ::ActorDataFlagComponent const,
        ::ActorDataControllingSeatIndexComponent const>                              vehiclesPlayerIsJumping,
    ::EntityModifier<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent> modifier
);

MCAPI void _tickTryExitVehicle(
    ::StrictEntityContext const& entity,
    ::PassengerComponent const&  passengerComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent>,
        ::Exclude<::BoatFlagComponent>,
        ::Optional<::MobFlagComponent const>,
        ::MovementAttributesComponent const,
        ::VehicleComponent const,
        ::ActorDataFlagComponent const,
        ::ActorDataControllingSeatIndexComponent const>                               vehiclesPlayerIsJumping,
    ::EntityModifier<::StopRidingRequestComponent, ::ExitFromPassengerFlagComponent>& modifier
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace TryExitVehicleSystem
