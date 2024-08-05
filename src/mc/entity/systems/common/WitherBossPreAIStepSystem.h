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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _doWitherBossPreAIStepSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifier<struct WitherBossPreAIStepResultComponent>);

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
