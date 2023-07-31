#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class CollidableMobNotifierSystem {

public:
    // prevent constructor by default
    CollidableMobNotifierSystem& operator=(CollidableMobNotifierSystem const&) = delete;
    CollidableMobNotifierSystem(CollidableMobNotifierSystem const&)            = delete;
    CollidableMobNotifierSystem()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?createSystem\@CollidableMobNotifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?tickNotifier\@CollidableMobNotifierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorFirstTick\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@AEAULocalSpatialEntityFetcherFactoryComponent\@\@AEAVLocalSpatialEntityFetcher\@\@\@Z
     */
    MCAPI static void tickNotifier(class StrictEntityContext const&, struct AABBShapeComponent const&, struct DimensionTypeComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct Exclude<class FlagComponent<struct ActorFirstTick>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>, struct LocalSpatialEntityFetcherFactoryComponent&, class LocalSpatialEntityFetcher&);
    /**
     * @symbol
     * ?tickSystem\@CollidableMobNotifierSystem\@\@SAXV?$OptionalGlobalT\@ULocalSpatialEntityFetcherFactoryComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorFirstTick\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickSystem(class OptionalGlobalT<struct LocalSpatialEntityFetcherFactoryComponent, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct CollidableMobFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>>, struct AABBShapeComponent const, struct DimensionTypeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>, struct Exclude<class FlagComponent<struct ActorFirstTick>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>);
    // NOLINTEND
};
