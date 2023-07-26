#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class StackableAndMobNearCollisionSystem {

public:
    // prevent constructor by default
    StackableAndMobNearCollisionSystem& operator=(StackableAndMobNearCollisionSystem const&) = delete;
    StackableAndMobNearCollisionSystem(StackableAndMobNearCollisionSystem const&)            = delete;
    StackableAndMobNearCollisionSystem()                                                     = delete;

public:
    /**
     * @symbol ?create\@StackableAndMobNearCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?tick\@StackableAndMobNearCollisionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUDimensionTypeComponent\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@UMoveRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$OptionalGlobalT\@ULocalSpatialEntityFetcherFactoryComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct DimensionTypeComponent const, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct MoveRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class OptionalGlobalT<struct LocalSpatialEntityFetcherFactoryComponent, class EntityRegistryBase>); // NOLINT
};
