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
struct SheepFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

class SheepPreAIStepSystem {
public:
    // prevent constructor by default
    SheepPreAIStepSystem& operator=(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem(SheepPreAIStepSystem const&);
    SheepPreAIStepSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doSheepPreAIStepSystem(::StrictEntityContext const&, ::ActorOwnerComponent& actorOwnerComponent);

    MCAPI static void _tickSheepPreAIStepSystem(::ViewT<
                                                ::StrictEntityContext,
                                                ::Include<::ActorMovementTickNeededComponent, ::SheepFlagComponent>,
                                                ::ActorOwnerComponent> view);

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
