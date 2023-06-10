/**
 * @file  ActorSetPosSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorSetPosSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_tickActorUpdatePositionAndAABBSystem2\@ActorSetPosSystemImpl\@\@YAXAEBUActorSetPositionRequestComponent\@\@AEBUOffsetsComponent\@\@AEBUSlideOffsetComponent\@\@AEAUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@V?$FlagComponent\@UPaintingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void _tickActorUpdatePositionAndAABBSystem2(struct ActorSetPositionRequestComponent const &, struct OffsetsComponent const &, struct SlideOffsetComponent const &, struct AABBShapeComponent &, struct StateVectorComponent &, class Optional<class FlagComponent<struct PaintingFlag>>);
    /**
     * @symbol ?_tickAddLocalPlayerEntityMovedSystemAsynchronous1\@ActorSetPosSystemImpl\@\@YAXAEAVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@\@Z
     */
    MCAPI void _tickAddLocalPlayerEntityMovedSystemAsynchronous1(class StrictEntityContext &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>);
    /**
     * @symbol ?_tickAddLocalPlayerEntityMovedSystemSynchronous1\@ActorSetPosSystemImpl\@\@YAXAEBVActorOwnerComponent\@\@\@Z
     */
    MCAPI void _tickAddLocalPlayerEntityMovedSystemSynchronous1(class ActorOwnerComponent const &);
    /**
     * @symbol ?_tickChunkMoveNeededSystemAsynchronous4\@ActorSetPosSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUChunkPositionComponent\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@\@Z
     */
    MCAPI void _tickChunkMoveNeededSystemAsynchronous4(class StrictEntityContext &, struct ChunkPositionComponent const &, struct StateVectorComponent const &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>);
    /**
     * @symbol ?_tickChunkMoveNeededSystemSynchronous4\@ActorSetPosSystemImpl\@\@YAXAEBVActorOwnerComponent\@\@AEBUChunkPositionComponent\@\@AEBUStateVectorComponent\@\@\@Z
     */
    MCAPI void _tickChunkMoveNeededSystemSynchronous4(class ActorOwnerComponent const &, struct ChunkPositionComponent const &, struct StateVectorComponent const &);
    /**
     * @symbol ?_tickMoveHitboxSystem3\@ActorSetPosSystemImpl\@\@YAXAEBUActorSetPositionRequestComponent\@\@AEAVHitboxComponent\@\@\@Z
     */
    MCAPI void _tickMoveHitboxSystem3(struct ActorSetPositionRequestComponent const &, class HitboxComponent &);
    /**
     * @symbol ?_tickShulkerUpdatePositionSystem5\@ActorSetPosSystemImpl\@\@YAXAEBUStateVectorComponent\@\@AEAUSynchedActorDataComponent\@\@\@Z
     */
    MCAPI void _tickShulkerUpdatePositionSystem5(struct StateVectorComponent const &, struct SynchedActorDataComponent &);

};