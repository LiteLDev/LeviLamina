#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class AddActorPacket;
class PredictedMovementComponent;
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

#ifdef LL_PLAT_C
MCAPI void _updateRuntimeData(::PredictedMovementComponent& component);
#endif

MCAPI ::TickingSystemWithInfo createSystem();

#ifdef LL_PLAT_C
MCAPI bool tryAddPredictionMoveData(::AddActorPacket const& packet, ::PredictedMovementComponent* component);
#endif
// NOLINTEND

} // namespace PredictedMovementSystem
