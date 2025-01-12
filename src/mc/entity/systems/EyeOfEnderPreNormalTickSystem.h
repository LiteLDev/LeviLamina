#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct EyeOfEnderFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class EyeOfEnderPreNormalTickSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doEyeOfEnderPreNormalTickSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void
    _tickEyeOfEnderPreNormalTickSystem(::ViewT<
                                       ::StrictEntityContext,
                                       ::Include<::ActorMovementTickNeededComponent, ::EyeOfEnderFlagComponent>,
                                       ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
