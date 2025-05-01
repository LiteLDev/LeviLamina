#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct LocalMoveVelocityComponent;
struct SquidFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SquidPreAiStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _doSquidPreAiStepSystem(::StrictEntityContext const&, ::LocalMoveVelocityComponent& localMoveVelocityComponent);

    MCNAPI static ::TickingSystemWithInfo createSystem();

    MCNAPI static void tick(::ViewT<
                            ::StrictEntityContext,
                            ::Include<::ActorMovementTickNeededComponent, ::SquidFlagComponent>,
                            ::LocalMoveVelocityComponent> view);
    // NOLINTEND
};
