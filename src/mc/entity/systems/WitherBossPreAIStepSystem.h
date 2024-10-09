#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class WitherBossPreAIStepSystem {
public:
    // prevent constructor by default
    WitherBossPreAIStepSystem& operator=(WitherBossPreAIStepSystem const&);
    WitherBossPreAIStepSystem(WitherBossPreAIStepSystem const&);
    WitherBossPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doWitherBossPreAIStepSystem(
        class StrictEntityContext&                                      context,
        class ActorOwnerComponent&                                      actorOwnerComponent,
        class EntityModifier<struct WitherBossPreAIStepResultComponent> mod
    );

    MCAPI static void _tickWitherBossPreAIStepSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct WitherBossFlag>>,
            class ActorOwnerComponent>                                  view,
        class EntityModifier<struct WitherBossPreAIStepResultComponent> mod
    );

    // NOLINTEND
};
