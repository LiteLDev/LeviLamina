#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct FreeCameraControlledComponent;
struct LocalMoveVelocityComponent;
struct MobTravelComponent;
struct PassengerComponent;
struct StateVectorComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace DesiredMoveDirectionFreeCameraControlledSystem {
// functions
// NOLINTBEGIN
MCNAPI void doControllingPassengerTick(::MobTravelComponent& mobTravelComponent, ::FreeCameraControlledComponent const& airControlledComponent, ::VehicleInputIntentComponent& vehicleInputIntentComponent, ::StateVectorComponent const& stateVectorComponent, ::ViewT<::StrictEntityContext, ::Include<::PassengerComponent>, ::ActorRotationComponent const, ::LocalMoveVelocityComponent const> const& controllingPassengerView);
// NOLINTEND

}
