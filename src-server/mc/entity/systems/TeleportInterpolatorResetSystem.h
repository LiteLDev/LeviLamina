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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::TickingSystemWithInfo createTeleportInterpolatorResetSystem();

    MCNAPI static void tickTeleportInterpolatorResetSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent, ::ServerPlayerComponent>, ::Optional<::MovementInterpolatorComponent>, ::PlayerPositionModeComponent const, ::FallDistanceComponent, ::StateVectorComponent> view);
    // NOLINTEND

};
