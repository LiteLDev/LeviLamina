#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

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
    // ?_doWitherBossPreAIStepSystem@WitherBossPreAIStepSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@V?$EntityModifier@UWitherBossPreAIStepResultComponent@@@@@Z
    MCAPI static void
    _doWitherBossPreAIStepSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifier<struct WitherBossPreAIStepResultComponent>);

    // symbol:
    // ?_tickWitherBossPreAIStepSystem@WitherBossPreAIStepSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UWitherBossFlag@@@@@@VActorOwnerComponent@@@@V?$EntityModifier@UWitherBossPreAIStepResultComponent@@@@@Z
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
