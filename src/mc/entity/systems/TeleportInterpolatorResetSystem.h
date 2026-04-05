#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct FallDistanceComponent;
struct InterpolateMovementNeededComponent;
struct MovementInterpolatorComponent;
struct PlayerPositionModeComponent;
struct ServerPlayerComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

class TeleportInterpolatorResetSystem {
public:
    // TeleportInterpolatorResetSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::ServerPlayerComponent>,
        ::Optional<::MovementInterpolatorComponent>,
        ::PlayerPositionModeComponent const,
        ::FallDistanceComponent,
        ::StateVectorComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createTeleportInterpolatorResetSystem();

    MCAPI static void tickTeleportInterpolatorResetSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent, ::ServerPlayerComponent>,
            ::Optional<::MovementInterpolatorComponent>,
            ::PlayerPositionModeComponent const,
            ::FallDistanceComponent,
            ::StateVectorComponent> view
    );
    // NOLINTEND
};
