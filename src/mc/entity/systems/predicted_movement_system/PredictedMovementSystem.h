#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ActorTickNeededComponent;
class AddActorPacket;
class MotionPredictionHintsPacket;
class MoveActorAbsoluteData;
class PredictedMovementComponent;
class SetActorMotionPacket;
class StrictEntityContext;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct MobFlagComponent;
struct MovementInterpolatorComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
namespace PredictedMovementSystem { struct SystemUniforms; }
// clang-format on

namespace PredictedMovementSystem {
// functions
// NOLINTBEGIN
MCAPI void _disablePrediction(::PredictedMovementComponent& predictedMovement);

MCAPI void _tickPredictedMovement(
    ::PredictedMovementComponent&                    predictedMovement,
    ::StateVectorComponent&                          stateVector,
    ::ActorOwnerComponent&                           actorOwnerComponent,
    ::Optional<::MobFlagComponent const>             isMob,
    ::Optional<::VehicleInputIntentComponent const>  vehicle,
    ::Optional<::MovementInterpolatorComponent>      interpolator,
    ::Optional<::ActorRotationComponent const>       actorRotation,
    ::Optional<::OnGroundFlagComponent const>        onGround,
    ::Optional<::ActorHeadRotationComponent const>   headRotation,
    ::PredictedMovementSystem::SystemUniforms const& uniforms
);

MCAPI void _tickSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorTickNeededComponent>,
        ::PredictedMovementComponent,
        ::StateVectorComponent,
        ::ActorOwnerComponent,
        ::Optional<::MobFlagComponent const>,
        ::Optional<::VehicleInputIntentComponent const>,
        ::Optional<::MovementInterpolatorComponent>,
        ::Optional<::ActorRotationComponent const>,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::ActorHeadRotationComponent const>>          view,
    ::ViewT<::StrictEntityContext, ::PredictedMovementComponent> disablingView
);

#ifdef LL_PLAT_C
MCAPI void _updateRuntimeData(::PredictedMovementComponent& component);

MCAPI void
addPredictionMotionData(::MotionPredictionHintsPacket const& packet, ::PredictedMovementComponent* component);

MCAPI void addPredictionMoveData(
    ::MoveActorAbsoluteData const&                 packet,
    ::PredictedMovementComponent&                  component,
    ::std::chrono::steady_clock::time_point const& receiveTimepoint
);
#endif

MCAPI ::TickingSystemWithInfo createSystem();

#ifdef LL_PLAT_C
MCAPI void suspendPredictedMovementComponent(::PredictedMovementComponent* component);

MCAPI bool tryAddPredictionMotionData(::SetActorMotionPacket const& packet, ::PredictedMovementComponent* component);

MCAPI bool tryAddPredictionMoveData(::AddActorPacket const& packet, ::PredictedMovementComponent* component);
#endif
// NOLINTEND

} // namespace PredictedMovementSystem
