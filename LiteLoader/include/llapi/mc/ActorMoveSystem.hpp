/**
 * @file  ActorMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMoveSystem.
 *
 */
class ActorMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVESYSTEM
public:
    class ActorMoveSystem& operator=(class ActorMoveSystem const &) = delete;
    ActorMoveSystem(class ActorMoveSystem const &) = delete;
    ActorMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createActorMoveSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorMoveSystem();
    /**
     * @symbol ?createUpdateHitboxSystem\@ActorMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateHitboxSystem();
    /**
     * @symbol ?tickActorMoveSystem\@ActorMoveSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUOnewayPhysicsBlocksComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@USubBBsComponent\@\@$$CBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UIsStuckItemFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UUsesOneWayCollisionFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@UShouldMoveTowardClosestSpaceFlagComponent\@\@\@\@\@Z
     */
    MCAPI static void tickActorMoveSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct OnewayPhysicsBlocksComponent const, struct MoveRequestComponent, struct AABBShapeComponent, struct SubBBsComponent, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct IsStuckItemFlag> const>, class Optional<class FlagComponent<struct UsesOneWayCollisionFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct IsStuckInColliderFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct WasPenetratingLastFrameFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct IsStuckInColliderFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>, struct ShouldMoveTowardClosestSpaceFlagComponent>);
    /**
     * @symbol ?tickUpdateHitboxSystem\@ActorMoveSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UMoveRequestComponent\@\@\@\@$$CBUStateVectorComponent\@\@VHitboxComponent\@\@\@\@\@Z
     */
    MCAPI static void tickUpdateHitboxSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct MoveRequestComponent>, struct StateVectorComponent const, class HitboxComponent>);

};
