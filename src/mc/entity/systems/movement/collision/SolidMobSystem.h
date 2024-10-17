#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace SolidMobSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

MCAPI void flagNearbyMobsForServerMovementCatchup(
    class StrictEntityContext const&                    player,
    struct StateVectorComponent const&                  stateVector,
    struct ServerCatchupMovementTrackerComponent const& tracker,
    class ViewT<
        class StrictEntityContext,
        struct DimensionTypeComponent const,
        struct AABBShapeComponent const,
        class Optional<class FlagComponent<struct MobFlag> const>,
        class Optional<struct IsSolidMobComponent const>> const& fullData,
    class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&
                                                            solidMobs,
    class EntityModifier<struct IsSolidMobNearbyComponent>  modifier,
    struct LocalSpatialEntityFetcherFactoryComponent const& fetcherFactory,
    class LocalSpatialEntityFetcher&                        fetcher,
    std::vector<class StrictEntityContext>&                 buffer
);

MCAPI void flagNearbyMobsForServerMovementCatchupSystem(
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct StateVectorComponent const,
        struct ServerCatchupMovementTrackerComponent const> view,
    class ViewT<
        class StrictEntityContext,
        struct DimensionTypeComponent const,
        struct AABBShapeComponent const,
        class Optional<class FlagComponent<struct MobFlag> const>,
        class Optional<struct IsSolidMobComponent const>> const& fullData,
    class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&
                                                                                 solidMobs,
    class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const> fetcherFactory,
    class EntityModifier<struct IsSolidMobNearbyComponent>                       modifier
);

MCAPI void flagNearbyMobsFromSolidEntity(
    class StrictEntityContext const&  solidMob,
    struct IsSolidMobComponent const& solid,
    struct AABBShapeComponent const&  shape,
    class ViewT<
        class StrictEntityContext,
        struct Include<class ActorOwnerComponent, struct AABBShapeComponent>,
        struct Exclude<class FlagComponent<struct ActorFirstTick>>,
        class Optional<class FlagComponent<struct MobFlag> const>,
        class Optional<struct IsSolidMobComponent const>,
        class Optional<class FlagComponent<struct FallingBlockFlag> const>> const& liveEntityView,
    class LocalSpatialEntityFetcher&                                               fetcher,
    class EntityModifier<struct IsSolidMobNearbyComponent>                         modifier,
    std::vector<class StrictEntityContext>&                                        buffer
);

MCAPI void flagNearbyMobsFromSolidSystem(
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct DimensionTypeComponent const,
        struct IsSolidMobComponent const,
        struct AABBShapeComponent const> view,
    class ViewT<
        class StrictEntityContext,
        struct Include<class ActorOwnerComponent, struct AABBShapeComponent>,
        struct Exclude<class FlagComponent<struct ActorFirstTick>>,
        class Optional<class FlagComponent<struct MobFlag> const>,
        class Optional<struct IsSolidMobComponent const>,
        class Optional<class FlagComponent<struct FallingBlockFlag> const>> const& liveEntityView,
    class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>   fetcherFactory,
    class EntityModifier<struct IsSolidMobNearbyComponent>                         modifier
);

MCAPI void flagSolidMobsFromNearbyEntity(
    class StrictEntityContext const&                          entity,
    struct AABBShapeComponent const&                          shape,
    class Optional<class FlagComponent<struct MobFlag> const> isMob,
    class Optional<struct IsSolidMobComponent const>          isSolid,
    class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&
                                                           nearbySolidMobs,
    class LocalSpatialEntityFetcher&                       fetcher,
    class EntityModifier<struct IsSolidMobNearbyComponent> modifier,
    std::vector<class StrictEntityContext>&                buffer
);

MCAPI void registerSystems(class EntitySystems& systems, bool isClientSide, bool isUsingClientRewind);

MCAPI void storeNearbyMob(
    struct IsSolidMobNearbyComponent&                                                      storage,
    class StrictEntityContext const&                                                       solidEntity,
    std::tuple<struct IsSolidMobComponent const&, struct AABBShapeComponent const&> const& toStore
);

MCAPI void storeNearbyMobsOnMoveRequest(
    struct IsSolidMobNearbyComponent const& nearby,
    struct DepenetrationComponent&          depenetration,
    struct MoveRequestComponent&            request
);
// NOLINTEND

}; // namespace SolidMobSystem
