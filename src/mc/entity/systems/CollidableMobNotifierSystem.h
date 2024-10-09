#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

class CollidableMobNotifierSystem {
public:
    // prevent constructor by default
    CollidableMobNotifierSystem& operator=(CollidableMobNotifierSystem const&);
    CollidableMobNotifierSystem(CollidableMobNotifierSystem const&);
    CollidableMobNotifierSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickNotifier(
        class StrictEntityContext const&,
        struct AABBShapeComponent const&     aabbShapeComponent,
        struct DimensionTypeComponent const& dimensionComponent,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct MobFlag>>,
            struct Exclude<class FlagComponent<struct ActorFirstTick>>> mobView,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>
                                                                                fallingBlockView,
        class EntityModifier<class FlagComponent<struct CollidableMobNearFlag>> mod,
        struct LocalSpatialEntityFetcherFactoryComponent&                       spatialEntityFetcherFactory,
        class LocalSpatialEntityFetcher&                                        spatialEntityFetcher
    );

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
            struct Exclude<class FlagComponent<struct ActorFirstTick>>> mobView,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>
                                                                                fallingBlockView,
        class EntityModifier<class FlagComponent<struct CollidableMobNearFlag>> mod
    );

    // NOLINTEND
};
