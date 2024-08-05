#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace PredictedMovementSystem { struct SystemUniforms; }
// clang-format on

namespace PredictedMovementSystem {
// NOLINTBEGIN
MCAPI void _disablePrediction(class PredictedMovementComponent&);

MCAPI void _tickPredictedMovement(class PredictedMovementComponent&, struct StateVectorComponent&, class ActorOwnerComponent&, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct VehicleInputIntentComponent const>, class Optional<struct MovementInterpolatorComponent>, class Optional<struct ActorRotationComponent const>, class Optional<struct OnGroundFlagComponent const>, class Optional<struct ActorHeadRotationComponent const>, struct PredictedMovementSystem::SystemUniforms const&);

MCAPI void _tickSystem(class ViewT<class StrictEntityContext, struct Include<class ActorTickNeededComponent>, class PredictedMovementComponent, struct StateVectorComponent, class ActorOwnerComponent, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct VehicleInputIntentComponent const>, class Optional<struct MovementInterpolatorComponent>, class Optional<struct ActorRotationComponent const>, class Optional<struct OnGroundFlagComponent const>, class Optional<struct ActorHeadRotationComponent const>>, class ViewT<class StrictEntityContext, class PredictedMovementComponent>);

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace PredictedMovementSystem
