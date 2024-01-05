#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

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

    // NOLINTEND
};
