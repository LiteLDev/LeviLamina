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
struct GuardianFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class GuardianPreAIStepSystem {
public:
    // prevent constructor by default
    GuardianPreAIStepSystem& operator=(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem(GuardianPreAIStepSystem const&);
    GuardianPreAIStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _doGuardianPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void
    _tickGuardianPreAIStepSystem(::ViewT<
                                 ::StrictEntityContext,
                                 ::Include<::ActorMovementTickNeededComponent, ::GuardianFlagComponent>,
                                 ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
