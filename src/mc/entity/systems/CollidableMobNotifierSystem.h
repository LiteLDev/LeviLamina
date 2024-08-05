#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class CollidableMobNotifierSystem {
public:
    // prevent constructor by default
    CollidableMobNotifierSystem& operator=(CollidableMobNotifierSystem const&);
    CollidableMobNotifierSystem(CollidableMobNotifierSystem const&);
    CollidableMobNotifierSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickNotifier(class StrictEntityContext const&, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct Exclude<class FlagComponent<struct ActorFirstTick>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class EntityModifier<class FlagComponent<struct CollidableMobNearFlag>> mod, struct LocalSpatialEntityFetcherFactoryComponent&, class LocalSpatialEntityFetcher&);

    MCAPI static void tickSystem(
        class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent> factory,
        class ViewT<
            class StrictEntityContext,
            struct Include<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct CollidableMobFlag>>,
            struct Exclude<class FlagComponent<struct ActorRemovedFlag>>,
            struct AABBShapeComponent const,
            struct DimensionTypeComponent const> view,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct MobFlag>>,
            struct Exclude<class FlagComponent<struct ActorFirstTick>>>,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>,
        class EntityModifier<class FlagComponent<struct CollidableMobNearFlag>> mod
    );

    // NOLINTEND
};
