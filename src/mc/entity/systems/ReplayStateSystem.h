#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ReplayStateSystem {
// NOLINTBEGIN
MCAPI void _tickReplayStateSystem(
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct PlayerCurrentTickComponent const,
        class ReplayStateComponent> playerReplayView,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct VehicleInputIntentComponent const,
        class ReplayStateComponent> vehicleReplayView
);

MCAPI void registerSystems(class EntitySystems& systemRegistry);
// NOLINTEND

}; // namespace ReplayStateSystem
