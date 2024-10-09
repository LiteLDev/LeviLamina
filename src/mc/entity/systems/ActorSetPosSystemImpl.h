#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorSetPosSystemImpl {
// NOLINTBEGIN
MCAPI void _tickActorUpdatePositionAndAABBSystem2(
    struct ActorSetPositionRequestComponent const&           positionUpdateRequest,
    struct OffsetsComponent const&                           heightOffsetComponent,
    struct AABBShapeComponent&                               aabbShapeComponent,
    struct StateVectorComponent&                             stateVectorComponent,
    class Optional<class FlagComponent<struct PaintingFlag>> isPainting
);

MCAPI void _tickAddLocalPlayerEntityMovedSystemAsynchronous1(
    class StrictEntityContext& context,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

MCAPI void _tickChunkMoveNeededSystemAsynchronous4(
    class StrictEntityContext&           context,
    struct ChunkPositionComponent const& chunkPositionComponent,
    struct StateVectorComponent const&   stateVectorComponent,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

MCAPI void _tickChunkMoveNeededSystemSynchronous4(
    class ActorOwnerComponent const&     actorOwnerComponent,
    struct ChunkPositionComponent const& chunkPositionComponent,
    struct StateVectorComponent const&   stateVectorComponent
);

MCAPI void _tickMoveHitboxSystem3(
    struct ActorSetPositionRequestComponent const& positionUpdateComponent,
    class HitboxComponent&                         hitboxComponent
);

MCAPI void _tickShulkerUpdatePositionSystem5(
    struct StateVectorComponent const&   stateVectorComponent,
    struct SynchedActorDataComponent&    synchedActorDataComponent,
    struct ActorDataFlagComponent&       actorDataFlagComponent,
    struct ActorDataDirtyFlagsComponent& dirtyFlagsComponent
);
// NOLINTEND

}; // namespace ActorSetPosSystemImpl
