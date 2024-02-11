#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace RideJumpTriggerSystem {
// NOLINTBEGIN
// symbol: ?createPassengerSystem@RideJumpTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createPassengerSystem();

// symbol: ?createVehicleSystem@RideJumpTriggerSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createVehicleSystem();

// symbol:
// ?tickPassengerJumpTriggerSystem@RideJumpTriggerSystem@@YAXU?$type_list@U?$Include@UPlayerInputRequestComponent@@@@@entt@@AEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUPassengerComponent@@AEAUJumpRidingScaleComponent@@AEAUVanillaClientGameplayComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUVehicleComponent@@$$CBUActorDataFlagComponent@@UVehicleInputIntentComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUPassengerComponent@@@@@@@Z
MCAPI void tickPassengerJumpTriggerSystem(entt::type_list<struct Include<struct PlayerInputRequestComponent>>, class StrictEntityContext const&, struct MoveInputComponent const&, struct PassengerComponent const&, struct JumpRidingScaleComponent&, struct VanillaClientGameplayComponent&, class ViewT<class StrictEntityContext, struct VehicleComponent const, struct ActorDataFlagComponent const, struct VehicleInputIntentComponent, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct PassengerComponent const>> const&);
// NOLINTEND

}; // namespace RideJumpTriggerSystem
