#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

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
                class FlagComponent<struct AbilitiesDirtyFlag>>> view,
        class ViewT<class StrictEntityContext, class LevelComponent>,
        class EntityModifier<class FlagComponent<struct AbilitiesDirtyFlag>> modifier
    );

    // NOLINTEND
};
