#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class Vec3;
struct AABBShapeComponent;
struct ClientAcceptanceConfig;
struct ClientAcceptanceThresholdsComponent;
struct EntitySystemTickingMode;
struct MoveRequestComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
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
// NOLINTEND

} // namespace ClientAcceptanceSystem
