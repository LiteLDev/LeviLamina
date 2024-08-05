#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SolidMobSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

MCAPI void
flagNearbyMobsForServerMovementCatchup(class StrictEntityContext const&, struct StateVectorComponent const&, struct ServerCatchupMovementTrackerComponent const&, class ViewT<class StrictEntityContext, struct DimensionTypeComponent const, struct AABBShapeComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>> const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class EntityModifier<struct IsSolidMobNearbyComponent>, struct LocalSpatialEntityFetcherFactoryComponent const&, class LocalSpatialEntityFetcher&, std::vector<class StrictEntityContext>&);

MCAPI void
flagNearbyMobsForServerMovementCatchupSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent const, struct ServerCatchupMovementTrackerComponent const>, class ViewT<class StrictEntityContext, struct DimensionTypeComponent const, struct AABBShapeComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>> const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>, class EntityModifier<struct IsSolidMobNearbyComponent>);

MCAPI void flagNearbyMobsFromSolidEntity(class StrictEntityContext const&, struct IsSolidMobComponent const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, struct Include<class ActorOwnerComponent, struct AABBShapeComponent>, struct Exclude<class FlagComponent<struct ActorFirstTick>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class Optional<class FlagComponent<struct FallingBlockFlag> const>> const&, class LocalSpatialEntityFetcher&, class EntityModifier<struct IsSolidMobNearbyComponent>, std::vector<class StrictEntityContext>&);

MCAPI void flagNearbyMobsFromSolidSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct DimensionTypeComponent const, struct IsSolidMobComponent const, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, struct Include<class ActorOwnerComponent, struct AABBShapeComponent>, struct Exclude<class FlagComponent<struct ActorFirstTick>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class Optional<class FlagComponent<struct FallingBlockFlag> const>> const&, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>, class EntityModifier<struct IsSolidMobNearbyComponent>);

MCAPI void flagSolidMobsFromNearbyEntity(class StrictEntityContext const&, struct AABBShapeComponent const&, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class LocalSpatialEntityFetcher&, class EntityModifier<struct IsSolidMobNearbyComponent>, std::vector<class StrictEntityContext>&);

MCAPI void registerSystems(class EntitySystems&, bool, bool);

MCAPI void
storeNearbyMob(struct IsSolidMobNearbyComponent&, class StrictEntityContext const&, std::tuple<struct IsSolidMobComponent const&, struct AABBShapeComponent const&> const&);

MCAPI void
storeNearbyMobsOnMoveRequest(struct IsSolidMobNearbyComponent const&, struct DepenetrationComponent&, struct MoveRequestComponent&);
// NOLINTEND

}; // namespace SolidMobSystem
