#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataFlagComponent;
struct JumpRidingScaleComponent;
struct MoveInputComponent;
struct OnGroundFlagComponent;
struct PassengerComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
struct VanillaClientGameplayComponent;
struct VehicleComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace RideJumpTriggerSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createVehicleSystem();

MCAPI void tickPassengerJumpTriggerSystem(
    ::entt::type_list<::Include<::PlayerInputRequestComponent>>,
    ::StrictEntityContext const&      context,
    ::MoveInputComponent const&       moveInputComponent,
    ::PassengerComponent const&       passengerComponent,
    ::JumpRidingScaleComponent&       jumpRidingScaleComponent,
    ::VanillaClientGameplayComponent& state,
    ::ViewT<
        ::StrictEntityContext,
        ::VehicleComponent const,
        ::ActorDataFlagComponent const,
        ::VehicleInputIntentComponent,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::PassengerComponent const>> const& vehicleView
);
// NOLINTEND

} // namespace RideJumpTriggerSystem
