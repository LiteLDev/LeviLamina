#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SolidMobSystem {
// NOLINTBEGIN
// symbol: ?createStoreNearbyMobsOnMoveRequestSystem@SolidMobSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

// symbol:
// ?flagNearbyMobsForServerMovementCatchup@SolidMobSystem@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEBUServerCatchupMovementTrackerComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUDimensionTypeComponent@@$$CBUAABBShapeComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@AEBULocalSpatialEntityFetcherFactoryComponent@@AEAVLocalSpatialEntityFetcher@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void flagNearbyMobsForServerMovementCatchup(class StrictEntityContext const&, struct StateVectorComponent const&, struct ServerCatchupMovementTrackerComponent const&, class ViewT<class StrictEntityContext, struct DimensionTypeComponent const, struct AABBShapeComponent const> const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class EntityModifier<struct IsSolidMobNearbyComponent>, struct LocalSpatialEntityFetcherFactoryComponent const&, class LocalSpatialEntityFetcher&, std::vector<class StrictEntityContext>&);

// symbol:
// ?flagNearbyMobsFromSolidSystem@SolidMobSystem@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUDimensionTypeComponent@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@VActorOwnerComponent@@@@U?$Exclude@V?$FlagComponent@UActorFirstTick@@@@@@$$CBUAABBShapeComponent@@@@V?$OptionalGlobal@$$CBULocalSpatialEntityFetcherFactoryComponent@@@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@@Z
MCAPI void flagNearbyMobsFromSolidSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct DimensionTypeComponent const, struct IsSolidMobComponent const, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, struct Include<class ActorOwnerComponent>, struct Exclude<class FlagComponent<struct ActorFirstTick>>, struct AABBShapeComponent const> const&, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>, class EntityModifier<struct IsSolidMobNearbyComponent>);

// symbol:
// ?flagSolidMobsFromNearbyEntity@SolidMobSystem@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@AEAVLocalSpatialEntityFetcher@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void flagSolidMobsFromNearbyEntity(class StrictEntityContext const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class LocalSpatialEntityFetcher&, class EntityModifier<struct IsSolidMobNearbyComponent>, std::vector<class StrictEntityContext>&);

// symbol: ?registerSystems@SolidMobSystem@@YAXAEAVEntitySystems@@_N1@Z
MCAPI void registerSystems(class EntitySystems&, bool, bool);
// NOLINTEND

}; // namespace SolidMobSystem
