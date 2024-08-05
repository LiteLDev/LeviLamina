#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

namespace ReplayStateSystem {
// NOLINTBEGIN
MCAPI void _tickReplayStateSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct PlayerCurrentTickComponent const, class ReplayStateComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct VehicleInputIntentComponent const, class ReplayStateComponent>);

MCAPI void registerSystems(class EntitySystems&);
// NOLINTEND

}; // namespace ReplayStateSystem
