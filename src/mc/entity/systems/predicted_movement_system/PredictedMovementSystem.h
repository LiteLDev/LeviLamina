#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace PredictedMovementSystem { struct SystemUniforms; }
// clang-format on

namespace PredictedMovementSystem {
// NOLINTBEGIN
MCAPI void _disablePrediction(class PredictedMovementComponent& predictedMovement);

MCAPI void _tickPredictedMovement(
    class PredictedMovementComponent&                         predictedMovement,
    struct StateVectorComponent&                              stateVector,
    class ActorOwnerComponent&                                actorOwnerComponent,
    class Optional<class FlagComponent<struct MobFlag> const> isMob,
    class Optional<struct VehicleInputIntentComponent const>  vehicle,
    class Optional<struct MovementInterpolatorComponent>      interpolator,
    class Optional<struct ActorRotationComponent const>       actorRotation,
    class Optional<struct OnGroundFlagComponent const>        onGround,
    class Optional<struct ActorHeadRotationComponent const>   headRotation,
    struct PredictedMovementSystem::SystemUniforms const&     uniforms
);

MCAPI void _tickSystem(
    class ViewT<
        class StrictEntityContext,
        struct Include<class ActorTickNeededComponent>,
        class PredictedMovementComponent,
        struct StateVectorComponent,
        class ActorOwnerComponent,
        class Optional<class FlagComponent<struct MobFlag> const>,
        class Optional<struct VehicleInputIntentComponent const>,
        class Optional<struct MovementInterpolatorComponent>,
        class Optional<struct ActorRotationComponent const>,
        class Optional<struct OnGroundFlagComponent const>,
        class Optional<struct ActorHeadRotationComponent const>>             view,
    class ViewT<class StrictEntityContext, class PredictedMovementComponent> disablingView
);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace PredictedMovementSystem
