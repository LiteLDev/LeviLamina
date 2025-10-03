#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct TickingSystemWithInfo;
struct WitherBossFlagComponent;
struct WitherBossPreAIStepResultComponent;
// clang-format on

class WitherBossPreAIStepSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _doWitherBossPreAIStepSystem(
        ::StrictEntityContext&                                 context,
        ::ActorOwnerComponent&                                 actorOwnerComponent,
        ::EntityModifier<::WitherBossPreAIStepResultComponent> mod
    );

    MCNAPI static void _tickWitherBossPreAIStepSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ActorMovementTickNeededComponent, ::WitherBossFlagComponent>,
            ::ActorOwnerComponent>                             view,
        ::EntityModifier<::WitherBossPreAIStepResultComponent> mod
    );

    MCNAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
