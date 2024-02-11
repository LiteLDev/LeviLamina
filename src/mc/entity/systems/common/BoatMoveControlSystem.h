#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/enums/Side.h"
#include "mc/world/components/FlagComponent.h"

namespace BoatMoveControlSystem {
// NOLINTBEGIN
// symbol: ?_paddleControl@BoatMoveControlSystem@@YAXAEBUBoatMovementComponent@@AEAUPaddle@@W4Side@@AEAVVec3@@3@Z
MCAPI void _paddleControl(struct BoatMovementComponent const&, struct Paddle&, ::Side, class Vec3&, class Vec3&);

// symbol:
// ?boatControl@BoatMoveControlSystem@@YAXAEBVStrictEntityContext@@AEAUBoatMovementComponent@@AEAUBoatPaddleComponent@@AEAUStateVectorComponent@@AEAUActorRotationComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUVehicleInputIntentComponent@@@@V?$EntityModifier@URemoveAllPassengersRequestComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
boatControl(class StrictEntityContext const&, struct BoatMovementComponent&, struct BoatPaddleComponent&, struct StateVectorComponent&, struct ActorRotationComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct VehicleInputIntentComponent const>, class EntityModifier<struct RemoveAllPassengersRequestComponent>, class IConstBlockSource const&);

// symbol: ?createSystem@BoatMoveControlSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace BoatMoveControlSystem
