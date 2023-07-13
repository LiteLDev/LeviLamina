/**
 * @file  ActorMoveSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorMoveSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doActorMoveSystem\@ActorMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUOnewayPhysicsBlocksComponent\@\@AEAUMoveRequestComponent\@\@AEAUAABBShapeComponent\@\@AEAUSubBBsComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UIsStuckItemFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UUsesOneWayCollisionFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@$$CBV?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UIsStuckInColliderFlag\@\@\@\@V?$FlagComponent\@UWasPenetratingLastFrameFlag\@\@\@\@V?$FlagComponent\@UMoveTowardsClosestSpaceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void doActorMoveSystem(class StrictEntityContext &, struct OnewayPhysicsBlocksComponent const &, struct MoveRequestComponent &, struct AABBShapeComponent &, struct SubBBsComponent &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct IsStuckItemFlag> const>, class Optional<class FlagComponent<struct UsesOneWayCollisionFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct IsStuckInColliderFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct WasPenetratingLastFrameFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct IsStuckInColliderFlag>, class FlagComponent<struct WasPenetratingLastFrameFlag>, class FlagComponent<struct MoveTowardsClosestSpaceFlag>>);
    /**
     * @symbol ?updateHitboxSystem\@ActorMoveSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEAVHitboxComponent\@\@\@Z
     */
    MCAPI void updateHitboxSystem(class StrictEntityContext const &, struct StateVectorComponent const &, class HitboxComponent &);

};