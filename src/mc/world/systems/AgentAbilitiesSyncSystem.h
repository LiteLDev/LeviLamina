#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class AgentAbilitiesSyncSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTABILITIESSYNCSYSTEM
public:
    AgentAbilitiesSyncSystem& operator=(AgentAbilitiesSyncSystem const&) = delete;
    AgentAbilitiesSyncSystem(AgentAbilitiesSyncSystem const&)            = delete;
    AgentAbilitiesSyncSystem()                                           = delete;
#endif

public:
    /**
     * @symbol ?createAgentAbilitiesSyncSystem\@AgentAbilitiesSyncSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAgentAbilitiesSyncSystem();
    /**
     * @symbol
     * ?tick\@AgentAbilitiesSyncSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@VActorOwnerComponent\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@U?$Include\@$$CBV?$FlagComponent\@UActorTickedFlag\@\@\@\@V?$FlagComponent\@UAbilitiesDirtyFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@VLevelComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAbilitiesDirtyFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, class ActorOwnerComponent, class FlagComponent<struct PlayerComponentFlag>, struct Include<class FlagComponent<struct ActorTickedFlag> const, class FlagComponent<struct AbilitiesDirtyFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class LevelComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AbilitiesDirtyFlag>>);
};
