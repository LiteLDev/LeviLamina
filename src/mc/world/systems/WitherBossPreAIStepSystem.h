#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class WitherBossPreAIStepSystem {
public:
    // prevent constructor by default
    WitherBossPreAIStepSystem& operator=(WitherBossPreAIStepSystem const&);
    WitherBossPreAIStepSystem(WitherBossPreAIStepSystem const&);
    WitherBossPreAIStepSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@WitherBossPreAIStepSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doWitherBossPreAIStepSystem@WitherBossPreAIStepSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UWitherBossPreAIStepResultComponent@@@@@Z
    MCAPI static void
    _doWitherBossPreAIStepSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct WitherBossPreAIStepResultComponent>);

    // NOLINTEND
};
