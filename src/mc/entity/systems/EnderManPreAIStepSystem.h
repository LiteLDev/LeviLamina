#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class EnderManPreAIStepSystem {
public:
    // prevent constructor by default
    EnderManPreAIStepSystem& operator=(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem(EnderManPreAIStepSystem const&);
    EnderManPreAIStepSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tick(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct EnderManFlag>,
                class FlagComponent<struct MobIsJumpingFlag>>>             view,
        class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
    );

    // NOLINTEND
};
