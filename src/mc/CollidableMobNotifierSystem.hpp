/**
 * @file  CollidableMobNotifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CollidableMobNotifierSystem.
 *
 */
class CollidableMobNotifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COLLIDABLEMOBNOTIFIERSYSTEM
public:
    class CollidableMobNotifierSystem& operator=(class CollidableMobNotifierSystem const &) = delete;
    CollidableMobNotifierSystem(class CollidableMobNotifierSystem const &) = delete;
    CollidableMobNotifierSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@CollidableMobNotifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?tickNotifier\@CollidableMobNotifierSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUAABBShapeComponent\@\@AEBUDimensionTypeComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@AEAULocalSpatialEntityFetcherFactoryComponent\@\@AEAVLocalSpatialEntityFetcher\@\@\@Z
     */
    MCAPI static void tickNotifier(class StrictEntityContext const &, struct AABBShapeComponent const &, struct DimensionTypeComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>, struct LocalSpatialEntityFetcherFactoryComponent &, class LocalSpatialEntityFetcher &);
    /**
     * @symbol  ?tickSystem\@CollidableMobNotifierSystem\@\@SAXV?$OptionalGlobalT\@ULocalSpatialEntityFetcherFactoryComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UCollidableMobFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorRemovedFlag\@\@\@\@\@\@$$CBUAABBShapeComponent\@\@$$CBUDimensionTypeComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UFallingBlockFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickSystem(class OptionalGlobalT<struct LocalSpatialEntityFetcherFactoryComponent, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct CollidableMobFlag>, class FlagComponent<struct UsesECSMovementFlag>>, struct Exclude<class FlagComponent<struct ActorRemovedFlag>>, struct AABBShapeComponent const, struct DimensionTypeComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct MobFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>);

};