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
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doMinecartPreNormalTickSystem(
        class StrictEntityContext& context,
        class ActorOwnerComponent&,
        class EntityModifier<struct MinecartPreNormalTickBlockPosComponent> mod
    );

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
