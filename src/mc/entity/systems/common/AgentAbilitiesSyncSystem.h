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
    // symbol: ?createAgentAbilitiesSyncSystem@AgentAbilitiesSyncSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAgentAbilitiesSyncSystem();

    // symbol:
    // ?tick@AgentAbilitiesSyncSystem@@SAXV?$ViewT@VStrictEntityContext@@VActorOwnerComponent@@V?$FlagComponent@UPlayerComponentFlag@@@@U?$Include@$$CBV?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UAbilitiesDirtyFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VLevelComponent@@@@V?$EntityModifier@V?$FlagComponent@UAbilitiesDirtyFlag@@@@@@@Z
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
