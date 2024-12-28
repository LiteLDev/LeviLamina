#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct FallDistanceComponent;
struct MovementInterpolatorComponent;
struct PlayerPositionModeComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class TeleportInterpolatorResetSystem {
public:
    // prevent constructor by default
    TeleportInterpolatorResetSystem& operator=(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem(TeleportInterpolatorResetSystem const&);
    TeleportInterpolatorResetSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createTeleportInterpolatorResetSystem();
    // NOLINTEND
};
