#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"

namespace RideJumpTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createPassengerSystem();

MCAPI struct TickingSystemWithInfo createVehicleSystem();

MCAPI void tickPassengerJumpTriggerSystem(entt::type_list<struct Include<struct PlayerInputRequestComponent>>, class StrictEntityContext const&, struct MoveInputComponent const&, struct PassengerComponent const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&, class ViewT<class StrictEntityContext, struct VehicleComponent const, struct ActorDataFlagComponent const, struct VehicleInputIntentComponent, class Optional<struct OnGroundFlagComponent const>, class Optional<struct PassengerComponent const>> const&);
// NOLINTEND

}; // namespace RideJumpTriggerSystem
