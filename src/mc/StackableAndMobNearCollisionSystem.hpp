/**
 * @file  StackableAndMobNearCollisionSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StackableAndMobNearCollisionSystem.
 *
 */
class StackableAndMobNearCollisionSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STACKABLEANDMOBNEARCOLLISIONSYSTEM
public:
    class StackableAndMobNearCollisionSystem& operator=(class StackableAndMobNearCollisionSystem const &) = delete;
    StackableAndMobNearCollisionSystem(class StackableAndMobNearCollisionSystem const &) = delete;
    StackableAndMobNearCollisionSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@StackableAndMobNearCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol  ?tick\@StackableAndMobNearCollisionSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$Optional\@$$CBV?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@$$CBUDimensionTypeComponent\@\@$$CBUSynchedActorDataComponent\@\@UMoveRequestComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$OptionalGlobalT\@ULocalSpatialEntityFetcherFactoryComponent\@\@VEntityRegistryBase\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct AABBShapeComponent const, struct DimensionTypeComponent const, struct SynchedActorDataComponent const, struct MoveRequestComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class OptionalGlobalT<struct LocalSpatialEntityFetcherFactoryComponent, class EntityRegistryBase>);

};