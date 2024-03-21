#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ReplayStateSystem {
// NOLINTBEGIN
// symbol:
// ?_tickReplayStateSystem@ReplayStateSystem@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUPlayerCurrentTickComponent@@VReplayStateComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUVehicleInputIntentComponent@@VReplayStateComponent@@@@@Z
MCAPI void _tickReplayStateSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct PlayerCurrentTickComponent const, class ReplayStateComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct VehicleInputIntentComponent const, class ReplayStateComponent>);

// symbol: ?registerSystems@ReplayStateSystem@@YAXAEAVEntitySystems@@@Z
MCAPI void registerSystems(class EntitySystems&);
// NOLINTEND

}; // namespace ReplayStateSystem
