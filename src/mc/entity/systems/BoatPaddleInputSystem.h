#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
struct ActorMovementTickNeededComponent;
struct BoatPaddleComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace BoatPaddleInputSystem {
// functions
// NOLINTBEGIN
MCNAPI void doVehicleTick(
    ::entt::type_list<::Include<::ActorMovementTickNeededComponent>>,
    ::VehicleInputIntentComponent const& vehicleInputIntent,
    ::BoatPaddleComponent&               boatPaddle
);
// NOLINTEND

} // namespace BoatPaddleInputSystem
