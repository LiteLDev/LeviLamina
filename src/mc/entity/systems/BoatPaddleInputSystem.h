#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"

namespace BoatPaddleInputSystem {
// NOLINTBEGIN
// symbol: ?createPassengerSystem@BoatPaddleInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createPassengerSystem();

// symbol: ?createVehicleSystem@BoatPaddleInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createVehicleSystem();

// symbol:
// ?doPassengerTick@BoatPaddleInputSystem@@YAXU?$type_list@U?$Include@UPlayerInputRequestComponent@@@@@entt@@AEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUPlayerInputModeComponent@@AEBUPassengerComponent@@AEBV?$Optional@$$CBUPlayerInteractionModelComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUActorRotationComponent@@$$CBUBoatPaddleComponent@@UVehicleInputIntentComponent@@@@@Z
MCAPI void
doPassengerTick(entt::type_list<struct Include<struct PlayerInputRequestComponent>>, class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct PassengerComponent const&, class Optional<struct PlayerInteractionModelComponent const> const&, class ViewT<class StrictEntityContext, struct ActorRotationComponent const, struct BoatPaddleComponent const, struct VehicleInputIntentComponent> const&);
// NOLINTEND

}; // namespace BoatPaddleInputSystem
