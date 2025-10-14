#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class ITickDelegate;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct FallingBlockFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class FallingBlockNormalTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doFallingBlockNormalTickSystem(
        ::StrictEntityContext const&,
        ::ActorOwnerComponent& actorOwnerComponent,
        ::ITickDelegate&       onLand
    );

    MCAPI static void _tickFallingBlockNormalTickSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::FallingBlockFlagComponent>,
            ::ActorOwnerComponent> view
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
