#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MinecartPreNormalTickSystem {
public:
    // prevent constructor by default
    MinecartPreNormalTickSystem& operator=(MinecartPreNormalTickSystem const&);
    MinecartPreNormalTickSystem(MinecartPreNormalTickSystem const&);
    MinecartPreNormalTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystem@MinecartPreNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_doMinecartPreNormalTickSystem@MinecartPreNormalTickSystem@@CAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@V?$EntityModifier@UMinecartPreNormalTickBlockPosComponent@@@@@Z
    MCAPI static void _doMinecartPreNormalTickSystem(
        class StrictEntityContext& context,
        class ActorOwnerComponent&,
        class EntityModifier<struct MinecartPreNormalTickBlockPosComponent> mod
    );

    // symbol:
    // ?_tickMinecartPreNormalTickSystem@MinecartPreNormalTickSystem@@CAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UMinecartFlag@@@@@@VActorOwnerComponent@@@@V?$EntityModifier@UMinecartPreNormalTickBlockPosComponent@@@@@Z
    MCAPI static void _tickMinecartPreNormalTickSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct MinecartFlag>>,
            class ActorOwnerComponent>                                      view,
        class EntityModifier<struct MinecartPreNormalTickBlockPosComponent> mod
    );

    // NOLINTEND
};
