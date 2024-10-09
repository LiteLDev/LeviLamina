#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class SlimePreNormalTickSystem {
public:
    // prevent constructor by default
    SlimePreNormalTickSystem& operator=(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem(SlimePreNormalTickSystem const&);
    SlimePreNormalTickSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _doSlimePreNormalTickSystem(
        class StrictEntityContext&                                                      context,
        class ActorOwnerComponent&                                                      actorOwnerComponent,
        class Optional<struct OnGroundFlagComponent const>                              onGround,
        class EntityModifier<class FlagComponent<struct SlimeWasOnGroundPreNormalTick>> mod
    );

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
