#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace ActorSetPosSystemImpl {
/**
 * @symbol
 * ?_tickActorUpdatePositionAndAABBSystem2\@ActorSetPosSystemImpl\@\@YAXAEBUActorSetPositionRequestComponent\@\@AEBUOffsetsComponent\@\@V?$Optional\@$$CBUSlideOffsetComponent\@\@\@\@AEAUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@V?$FlagComponent\@UPaintingFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
_tickActorUpdatePositionAndAABBSystem2(struct ActorSetPositionRequestComponent const&, struct OffsetsComponent const&, class Optional<struct SlideOffsetComponent const>, struct AABBShapeComponent&, struct StateVectorComponent&, class Optional<class FlagComponent<struct PaintingFlag>>);
/**
 * @symbol
 * ?_tickAddLocalPlayerEntityMovedSystemAsynchronous1\@ActorSetPosSystemImpl\@\@YAXAEAVStrictEntityContext\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@\@Z
 */
MCAPI void
_tickAddLocalPlayerEntityMovedSystemAsynchronous1(class StrictEntityContext&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>);
/**
 * @symbol
 * ?_tickChunkMoveNeededSystemAsynchronous4\@ActorSetPosSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUChunkPositionComponent\@\@AEBUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UActorChunkMoveFlag\@\@\@\@V?$FlagComponent\@UActorLocalPlayerEntityMovedFlag\@\@\@\@UActorSetPositionRequestComponent\@\@\@\@\@Z
 */
MCAPI void
_tickChunkMoveNeededSystemAsynchronous4(class StrictEntityContext&, struct ChunkPositionComponent const&, struct StateVectorComponent const&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct ActorChunkMoveFlag>, class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>, struct ActorSetPositionRequestComponent>);
/**
 * @symbol
 * ?_tickChunkMoveNeededSystemSynchronous4\@ActorSetPosSystemImpl\@\@YAXAEBVActorOwnerComponent\@\@AEBUChunkPositionComponent\@\@AEBUStateVectorComponent\@\@\@Z
 */
MCAPI void
_tickChunkMoveNeededSystemSynchronous4(class ActorOwnerComponent const&, struct ChunkPositionComponent const&, struct StateVectorComponent const&);
/**
 * @symbol
 * ?_tickMoveHitboxSystem3\@ActorSetPosSystemImpl\@\@YAXAEBUActorSetPositionRequestComponent\@\@AEAVHitboxComponent\@\@\@Z
 */
MCAPI void _tickMoveHitboxSystem3(struct ActorSetPositionRequestComponent const&, class HitboxComponent&);
/**
 * @symbol
 * ?_tickShulkerUpdatePositionSystem5\@ActorSetPosSystemImpl\@\@YAXAEBUStateVectorComponent\@\@AEAUSynchedActorDataComponent\@\@\@Z
 */
MCAPI void _tickShulkerUpdatePositionSystem5(struct StateVectorComponent const&, struct SynchedActorDataComponent&);

}; // namespace ActorSetPosSystemImpl
