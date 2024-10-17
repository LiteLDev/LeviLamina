#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

namespace BoatPaddleInputSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createPassengerSystem();

MCAPI struct TickingSystemWithInfo createVehicleSystem();

MCAPI void doPassengerTick(
    entt::type_list<struct Include<struct PlayerInputRequestComponent>>,
    class StrictEntityContext const&                                    context,
    struct MoveInputComponent const&                                    moveInputComponent,
    struct PlayerInputModeComponent const&                              playerInputModeComponent,
    struct PassengerComponent const&                                    passengerComponent,
    class Optional<struct PlayerInteractionModelComponent const> const& playerInteractionModelComponent,
    class ViewT<
        class StrictEntityContext,
        struct ActorRotationComponent const,
        struct BoatPaddleComponent const,
        struct VehicleInputIntentComponent> const& vehicleView
);
// NOLINTEND

}; // namespace BoatPaddleInputSystem
