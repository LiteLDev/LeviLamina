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
// symbol: ?_disablePrediction@PredictedMovementSystem@@YAXAEAVPredictedMovementComponent@@@Z
MCAPI void _disablePrediction(class PredictedMovementComponent&);

// symbol:
// ?_tickPredictedMovement@PredictedMovementSystem@@YAXAEAVPredictedMovementComponent@@AEAUStateVectorComponent@@AEAVActorOwnerComponent@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUVehicleInputIntentComponent@@@@V?$Optional@UMovementInterpolatorComponent@@@@V?$Optional@$$CBUActorRotationComponent@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUActorHeadRotationComponent@@@@AEBUSystemUniforms@1@@Z
MCAPI void
_tickPredictedMovement(class PredictedMovementComponent&, struct StateVectorComponent&, class ActorOwnerComponent&, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct VehicleInputIntentComponent const>, class Optional<struct MovementInterpolatorComponent>, class Optional<struct ActorRotationComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct ActorHeadRotationComponent const>, struct PredictedMovementSystem::SystemUniforms const&);

// symbol:
// ?_tickSystem@PredictedMovementSystem@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@VActorTickNeededComponent@@@@VPredictedMovementComponent@@UStateVectorComponent@@VActorOwnerComponent@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUVehicleInputIntentComponent@@@@V?$Optional@UMovementInterpolatorComponent@@@@V?$Optional@$$CBUActorRotationComponent@@@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUActorHeadRotationComponent@@@@@@V?$ViewT@VStrictEntityContext@@VPredictedMovementComponent@@@@@Z
MCAPI void _tickSystem(class ViewT<class StrictEntityContext, struct Include<class ActorTickNeededComponent>, class PredictedMovementComponent, struct StateVectorComponent, class ActorOwnerComponent, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct VehicleInputIntentComponent const>, class Optional<struct MovementInterpolatorComponent>, class Optional<struct ActorRotationComponent const>, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct ActorHeadRotationComponent const>>, class ViewT<class StrictEntityContext, class PredictedMovementComponent>);

// symbol: ?createSystem@PredictedMovementSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace PredictedMovementSystem
