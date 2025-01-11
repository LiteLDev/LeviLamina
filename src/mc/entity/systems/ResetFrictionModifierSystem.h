#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct FrictionModifierComponent;
struct PlayerInputRequestComponent;
struct TickingSystemWithInfo;
// clang-format on

class ResetFrictionModifierSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();

    MCAPI static void
    tickResetFrictionModifierSystem(::ViewT<
                                    ::StrictEntityContext,
                                    ::Include<::ActorMovementTickNeededComponent, ::PlayerInputRequestComponent>,
                                    ::FrictionModifierComponent> view);
    // NOLINTEND
};
