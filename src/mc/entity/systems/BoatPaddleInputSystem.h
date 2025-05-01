#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ActorRotationComponent;
struct BoatPaddleComponent;
struct MoveInputComponent;
struct PassengerComponent;
struct PlayerInputModeComponent;
struct PlayerInputRequestComponent;
struct PlayerInteractionModelComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace BoatPaddleInputSystem {
// functions
// NOLINTBEGIN
MCNAPI void doPassengerTick(
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

MCNAPI void doVehicleTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::VehicleInputIntentComponent const& vehicleInputIntent,
    ::BoatPaddleComponent&               boatPaddle
);
// NOLINTEND

} // namespace BoatPaddleInputSystem
