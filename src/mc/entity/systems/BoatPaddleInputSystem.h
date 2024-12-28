#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct BoatPaddleComponent;
struct MoveInputComponent;
struct PassengerComponent;
struct PlayerInputModeComponent;
struct PlayerInputRequestComponent;
struct PlayerInteractionModelComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace BoatPaddleInputSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createPassengerSystem();

MCAPI ::TickingSystemWithInfo createVehicleSystem();

MCAPI void doPassengerTick(
    ::entt::type_list<::Include<::PlayerInputRequestComponent>>,
    ::StrictEntityContext const&                               context,
    ::MoveInputComponent const&                                moveInputComponent,
    ::PlayerInputModeComponent const&                          playerInputModeComponent,
    ::PassengerComponent const&                                passengerComponent,
    ::Optional<::PlayerInteractionModelComponent const> const& playerInteractionModelComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::ActorRotationComponent const,
        ::BoatPaddleComponent const,
        ::VehicleInputIntentComponent> const& vehicleView
);
// NOLINTEND

} // namespace BoatPaddleInputSystem
