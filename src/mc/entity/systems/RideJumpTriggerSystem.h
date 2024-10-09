#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

namespace RideJumpTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createPassengerSystem();

MCAPI struct TickingSystemWithInfo createVehicleSystem();

MCAPI void tickPassengerJumpTriggerSystem(
    entt::type_list<struct Include<struct PlayerInputRequestComponent>>,
    class StrictEntityContext const&       context,
    struct MoveInputComponent const&       moveInputComponent,
    struct PassengerComponent const&       passengerComponent,
    struct JumpRidingScaleComponent&       jumpRidingScaleComponent,
    struct VanillaClientGameplayComponent& state,
    class ViewT<
        class StrictEntityContext,
        struct VehicleComponent const,
        struct ActorDataFlagComponent const,
        struct VehicleInputIntentComponent,
        class Optional<struct OnGroundFlagComponent const>,
        class Optional<struct PassengerComponent const>> const& vehicleView
);
// NOLINTEND

}; // namespace RideJumpTriggerSystem
