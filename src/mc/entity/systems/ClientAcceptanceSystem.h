#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct ClientAcceptanceConfig;
struct ClientAcceptanceThresholdsComponent;
struct EntitySystemTickingMode;
struct MoveRequestComponent;
struct PassengerComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace ClientAcceptanceSystem {
// functions
// NOLINTBEGIN
MCNAPI void adjustMotion(
    ::Vec3 const&                                 amount,
    ::ServerPlayerCurrentMovementComponent const& input,
    ::MoveRequestComponent&                       moveRequest,
    ::AABBShapeComponent&                         shape,
    ::ClientAcceptanceConfig const&               config
);

MCNAPI void registerSystems(::EntitySystems& systems, ::EntitySystemTickingMode const& mode);

MCNAPI void tickClientAcceptance(
    ::ServerPlayerCurrentMovementComponent const& currentMove,
    ::StateVectorComponent const&                 stateVector,
    ::MoveRequestComponent&                       moveRequest,
    ::ClientAcceptanceThresholdsComponent&        thresholds,
    ::AABBShapeComponent&                         shape
);

MCNAPI void tickPlayerOrVehicle(
    ::StrictEntityContext const&                  player,
    ::ServerPlayerCurrentMovementComponent const& input,
    ::ClientAcceptanceThresholdsComponent&        acceptance,
    ::Optional<::PassengerComponent const>        passenger,
    ::ViewT<::StrictEntityContext, ::MoveRequestComponent, ::AABBShapeComponent, ::StateVectorComponent const>
                                                                         moveRequests,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent const>& vehicleView
);
// NOLINTEND

} // namespace ClientAcceptanceSystem
