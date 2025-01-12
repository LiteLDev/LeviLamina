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
struct TickingSystemWithInfo;
struct WitchFlagComponent;
// clang-format on

class WitchPreAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doWitchPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickWitchPreAIStepSystem(::ViewT<
                                                ::StrictEntityContext,
                                                ::Include<::ActorMovementTickNeededComponent, ::WitchFlagComponent>,
                                                ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
