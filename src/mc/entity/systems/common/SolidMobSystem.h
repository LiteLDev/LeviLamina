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
// symbol: ?createStoreNearbyMobsOnMoveRequestSystem@SolidMobSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createStoreNearbyMobsOnMoveRequestSystem();

// symbol:
// ?flagNearbyMobsForServerMovementCatchup@SolidMobSystem@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEBUServerCatchupMovementTrackerComponent@@AEBV?$ViewT@VStrictEntityContext@@$$CBUDimensionTypeComponent@@$$CBUAABBShapeComponent@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUIsSolidMobComponent@@@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@AEBULocalSpatialEntityFetcherFactoryComponent@@AEAVLocalSpatialEntityFetcher@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void
flagNearbyMobsForServerMovementCatchup(class StrictEntityContext const&, struct StateVectorComponent const&, struct ServerCatchupMovementTrackerComponent const&, class ViewT<class StrictEntityContext, struct DimensionTypeComponent const, struct AABBShapeComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>> const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class EntityModifier<struct IsSolidMobNearbyComponent>, struct LocalSpatialEntityFetcherFactoryComponent const&, class LocalSpatialEntityFetcher&, std::vector<class StrictEntityContext>&);

// symbol:
// ?flagNearbyMobsForServerMovementCatchupSystem@SolidMobSystem@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUStateVectorComponent@@$$CBUServerCatchupMovementTrackerComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUDimensionTypeComponent@@$$CBUAABBShapeComponent@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUIsSolidMobComponent@@@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@V?$OptionalGlobal@$$CBULocalSpatialEntityFetcherFactoryComponent@@@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@@Z
MCAPI void
flagNearbyMobsForServerMovementCatchupSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent const, struct ServerCatchupMovementTrackerComponent const>, class ViewT<class StrictEntityContext, struct DimensionTypeComponent const, struct AABBShapeComponent const, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>> const&, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>, class EntityModifier<struct IsSolidMobNearbyComponent>);

// symbol:
// ?flagNearbyMobsFromSolidEntity@SolidMobSystem@@YAXAEBVStrictEntityContext@@AEBUIsSolidMobComponent@@AEBUAABBShapeComponent@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@VActorOwnerComponent@@UAABBShapeComponent@@@@U?$Exclude@V?$FlagComponent@UActorFirstTick@@@@@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUIsSolidMobComponent@@@@V?$Optional@$$CBV?$FlagComponent@UFallingBlockFlag@@@@@@@@AEAVLocalSpatialEntityFetcher@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void flagNearbyMobsFromSolidEntity(class StrictEntityContext const&, struct IsSolidMobComponent const&, struct AABBShapeComponent const&, class ViewT<class StrictEntityContext, struct Include<class ActorOwnerComponent, struct AABBShapeComponent>, struct Exclude<class FlagComponent<struct ActorFirstTick>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class Optional<class FlagComponent<struct FallingBlockFlag> const>> const&, class LocalSpatialEntityFetcher&, class EntityModifier<struct IsSolidMobNearbyComponent>, std::vector<class StrictEntityContext>&);

// symbol:
// ?flagNearbyMobsFromSolidSystem@SolidMobSystem@@YAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@$$CBUDimensionTypeComponent@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@VActorOwnerComponent@@UAABBShapeComponent@@@@U?$Exclude@V?$FlagComponent@UActorFirstTick@@@@@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUIsSolidMobComponent@@@@V?$Optional@$$CBV?$FlagComponent@UFallingBlockFlag@@@@@@@@V?$OptionalGlobal@$$CBULocalSpatialEntityFetcherFactoryComponent@@@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@@Z
MCAPI void flagNearbyMobsFromSolidSystem(class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct DimensionTypeComponent const, struct IsSolidMobComponent const, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, struct Include<class ActorOwnerComponent, struct AABBShapeComponent>, struct Exclude<class FlagComponent<struct ActorFirstTick>>, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class Optional<class FlagComponent<struct FallingBlockFlag> const>> const&, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent const>, class EntityModifier<struct IsSolidMobNearbyComponent>);

// symbol:
// ?flagSolidMobsFromNearbyEntity@SolidMobSystem@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@V?$Optional@$$CBV?$FlagComponent@UMobFlag@@@@@@V?$Optional@$$CBUIsSolidMobComponent@@@@AEBV?$ViewT@VStrictEntityContext@@$$CBUIsSolidMobComponent@@$$CBUAABBShapeComponent@@@@AEAVLocalSpatialEntityFetcher@@V?$EntityModifier@UIsSolidMobNearbyComponent@@@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void flagSolidMobsFromNearbyEntity(class StrictEntityContext const&, struct AABBShapeComponent const&, class Optional<class FlagComponent<struct MobFlag> const>, class Optional<struct IsSolidMobComponent const>, class ViewT<class StrictEntityContext, struct IsSolidMobComponent const, struct AABBShapeComponent const> const&, class LocalSpatialEntityFetcher&, class EntityModifier<struct IsSolidMobNearbyComponent>, std::vector<class StrictEntityContext>&);

// symbol: ?registerSystems@SolidMobSystem@@YAXAEAVEntitySystems@@_N1@Z
MCAPI void registerSystems(class EntitySystems&, bool, bool);

// symbol:
// ?storeNearbyMob@SolidMobSystem@@YAXAEAUIsSolidMobNearbyComponent@@AEBVStrictEntityContext@@AEBV?$tuple@AEBUIsSolidMobComponent@@AEBUAABBShapeComponent@@@std@@@Z
MCAPI void
storeNearbyMob(struct IsSolidMobNearbyComponent&, class StrictEntityContext const&, std::tuple<struct IsSolidMobComponent const&, struct AABBShapeComponent const&> const&);

// symbol:
// ?storeNearbyMobsOnMoveRequest@SolidMobSystem@@YAXAEBUIsSolidMobNearbyComponent@@AEAUDepenetrationComponent@@AEAUMoveRequestComponent@@@Z
MCAPI void
storeNearbyMobsOnMoveRequest(struct IsSolidMobNearbyComponent const&, struct DepenetrationComponent&, struct MoveRequestComponent&);
// NOLINTEND

}; // namespace SolidMobSystem
