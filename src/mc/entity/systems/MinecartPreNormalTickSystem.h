#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

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
        class StrictEntityContext&                                          context,
        class ActorOwnerComponent&                                          actorOwnerComponent,
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
