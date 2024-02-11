#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace PlayerTickSystemImpl {
// NOLINTBEGIN
// symbol:
// ?_tryTickPlayerMovement@PlayerTickSystemImpl@@YA?AV?$optional@_K@std@@AEAUPlayerTickComponent@@AEBUIPlayerTickPolicy@@@Z
MCAPI std::optional<uint64> _tryTickPlayerMovement(struct PlayerTickComponent&, struct IPlayerTickPolicy const&);

// symbol:
// ?playerInClientPredictedVehicle@PlayerTickSystemImpl@@YA_NAEBV?$Optional@$$CBUPassengerComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@UVehicleInputIntentComponent@@@@@Z
MCAPI bool
playerInClientPredictedVehicle(class Optional<struct PassengerComponent const> const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct VehicleInputIntentComponent> const&);
// NOLINTEND

}; // namespace PlayerTickSystemImpl
