#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class NormalTickFilterSystem {
public:
    // prevent constructor by default
    NormalTickFilterSystem& operator=(NormalTickFilterSystem const&);
    NormalTickFilterSystem(NormalTickFilterSystem const&);
    NormalTickFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createGenericSystem();

    MCAPI static struct TickingSystemWithInfo createLocalPlayerSystem();

    MCAPI static void tickGenericSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct PlayerComponentFlag>>,
            class Optional<class DimensionStateComponent const>>         view,
        class EntityModifier<class FlagComponent<struct SkipNormalTick>> mod
    );

    MCAPI static void tickLocalPlayerSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct LocalPlayerComponentFlag>>,
            class Optional<class LoadingStateComponent const>>           view,
        class EntityModifier<class FlagComponent<struct SkipNormalTick>> mod
    );

    // NOLINTEND
};
