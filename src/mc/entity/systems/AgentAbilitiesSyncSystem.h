#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class AgentAbilitiesSyncSystem {
public:
    // prevent constructor by default
    AgentAbilitiesSyncSystem& operator=(AgentAbilitiesSyncSystem const&);
    AgentAbilitiesSyncSystem(AgentAbilitiesSyncSystem const&);
    AgentAbilitiesSyncSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createAgentAbilitiesSyncSystem();

    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            class ActorOwnerComponent,
            class FlagComponent<struct PlayerComponentFlag>,
            struct Include<
                class FlagComponent<struct ActorTickedFlag> const,
                class FlagComponent<struct AbilitiesDirtyFlag>>>             view,
        class ViewT<class StrictEntityContext, class LevelComponent>         levelView,
        class EntityModifier<class FlagComponent<struct AbilitiesDirtyFlag>> modifier
    );

    // NOLINTEND
};
