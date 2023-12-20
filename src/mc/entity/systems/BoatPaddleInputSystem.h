#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"

namespace BoatPaddleInputSystem {
// NOLINTBEGIN
// symbol: ?createPassengerSystem@BoatPaddleInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createPassengerSystem();

// symbol: ?createVehicleSystem@BoatPaddleInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createVehicleSystem();

// symbol:
// ?doPassengerTick@BoatPaddleInputSystem@@YAXAEBVStrictEntityContext@@AEBUMoveInputComponent@@AEBUPlayerInputModeComponent@@AEBUPassengerComponent@@AEBUPlayerPaddleComponent@@AEBV?$Optional@$$CBUPlayerInteractionModelComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUActorRotationComponent@@$$CBUBoatPaddleComponent@@UVehicleInputIntentComponent@@@@AEBUCurrentTickComponent@@@Z
MCAPI void doPassengerTick(class StrictEntityContext const&, struct MoveInputComponent const&, struct PlayerInputModeComponent const&, struct PassengerComponent const&, struct PlayerPaddleComponent const&, class Optional<struct PlayerInteractionModelComponent const> const&, class ViewT<class StrictEntityContext, struct ActorRotationComponent const, struct BoatPaddleComponent const, struct VehicleInputIntentComponent> const&, struct CurrentTickComponent const&);

// symbol:
// ?doVehicleTick@BoatPaddleInputSystem@@YAXAEBUVehicleInputIntentComponent@@AEAUBoatPaddleComponent@@AEBUCurrentTickComponent@@@Z
MCAPI void
doVehicleTick(struct VehicleInputIntentComponent const&, struct BoatPaddleComponent&, struct CurrentTickComponent const&);
// NOLINTEND

}; // namespace BoatPaddleInputSystem
