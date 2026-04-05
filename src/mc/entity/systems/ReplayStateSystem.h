#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class ReplayStateComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct ServerPlayerCurrentMovementComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace ReplayStateSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickReplayStateSystem(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::ServerPlayerCurrentMovementComponent const,
        ::ReplayStateComponent> playerReplayView,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ActorMovementTickNeededComponent>,
        ::VehicleInputIntentComponent const,
        ::ReplayStateComponent> vehicleReplayView
);

MCAPI void registerSystems(::EntitySystems& systemRegistry);
// NOLINTEND

} // namespace ReplayStateSystem
