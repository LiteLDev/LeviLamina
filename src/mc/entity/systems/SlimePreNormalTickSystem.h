#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class SlimePreNormalTickSystem {
public:
    // prevent constructor by default
    SlimePreNormalTickSystem& operator=(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@SlimePreNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doSlimePreNormalTickSystem@SlimePreNormalTickSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@V?$EntityModifier@V?$FlagComponent@USlimeWasOnGroundPreNormalTick@@@@@@@Z
    MCAPI static void
    _doSlimePreNormalTickSystem(class StrictEntityContext&, class ActorOwnerComponent&, class Optional<struct OnGroundFlagComponent const>, class EntityModifier<class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>);

    // symbol:
    // ?_tickSlimePreNormalTickSystem@SlimePreNormalTickSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@USlimeFlag@@@@@@VActorOwnerComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@@@V?$EntityModifier@V?$FlagComponent@USlimeWasOnGroundPreNormalTick@@@@@@@Z
    MCAPI static void _tickSlimePreNormalTickSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct SlimeFlag>>,
            class ActorOwnerComponent,
            class Optional<struct OnGroundFlagComponent const>>                         view,
        class EntityModifier<class FlagComponent<struct SlimeWasOnGroundPreNormalTick>> mod
    );

    // NOLINTEND
};
