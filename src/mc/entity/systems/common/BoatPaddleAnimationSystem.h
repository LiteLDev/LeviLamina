#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace BoatPaddleAnimationSystem {
// NOLINTBEGIN
// symbol: ?createSystem@BoatPaddleAnimationSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?sendAnimationPackets@BoatPaddleAnimationSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UBoatFlag@@@@V?$FlagComponent@UShouldBeSimulatedFlag@@@@@@U?$Exclude@V?$FlagComponent@UActorRemovedFlag@@@@@@@entt@@AEBVActorOwnerComponent@@AEBUBoatPaddleComponent@@AEBV?$Optional@$$CBUVehicleInputIntentComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBURuntimeIDComponent@@@@@Z
MCAPI void sendAnimationPackets(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct BoatFlag>, class FlagComponent<struct ShouldBeSimulatedFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>>>, class ActorOwnerComponent const&, struct BoatPaddleComponent const&, class Optional<struct VehicleInputIntentComponent const> const&, class ViewT<class StrictEntityContext, struct RuntimeIDComponent const> const&);
// NOLINTEND

}; // namespace BoatPaddleAnimationSystem
