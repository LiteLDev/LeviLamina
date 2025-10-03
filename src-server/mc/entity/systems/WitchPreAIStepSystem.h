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
    MCNAPI static void
    _doWitchPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCNAPI static void _tickWitchPreAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::WitchFlagComponent>,
            ::ActorOwnerComponent> view
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
