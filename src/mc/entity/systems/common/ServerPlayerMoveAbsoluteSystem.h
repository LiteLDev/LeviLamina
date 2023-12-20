#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ServerPlayerMoveAbsoluteSystem {
// NOLINTBEGIN
// symbol: ?createSystem@ServerPlayerMoveAbsoluteSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?tickMoveAbsoluteSystem@ServerPlayerMoveAbsoluteSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUServerPlayerMoveAbsoluteComponent@@AEBUPassengerComponent@@V?$ViewT@VStrictEntityContext@@U?$Exclude@V?$FlagComponent@UControlledByLocalInstanceFlag@@@@@@UVehicleComponent@@VActorOwnerComponent@@@@AEAV?$EntityModifier@UServerPlayerMoveAbsoluteComponent@@@@@Z
MCAPI void tickMoveAbsoluteSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct ServerPlayerMoveAbsoluteComponent const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, struct Exclude<class FlagComponent<struct ControlledByLocalInstanceFlag>>, struct VehicleComponent, class ActorOwnerComponent>, class EntityModifier<struct ServerPlayerMoveAbsoluteComponent>&);
// NOLINTEND

}; // namespace ServerPlayerMoveAbsoluteSystem
