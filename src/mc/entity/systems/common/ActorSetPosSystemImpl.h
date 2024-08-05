#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorSetPosSystemImpl {
// NOLINTBEGIN
MCAPI void
_tickActorUpdatePositionAndAABBSystem2(struct ActorSetPositionRequestComponent const&, struct OffsetsComponent const&, struct AABBShapeComponent&, struct StateVectorComponent&, class Optional<class FlagComponent<struct PaintingFlag>>);

MCAPI void _tickAddLocalPlayerEntityMovedSystemAsynchronous1(
    class StrictEntityContext& context,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

MCAPI void _tickChunkMoveNeededSystemAsynchronous4(
    class StrictEntityContext& context,
    struct ChunkPositionComponent const&,
    struct StateVectorComponent const&,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

MCAPI void
_tickChunkMoveNeededSystemSynchronous4(class ActorOwnerComponent const&, struct ChunkPositionComponent const&, struct StateVectorComponent const&);

MCAPI void _tickMoveHitboxSystem3(struct ActorSetPositionRequestComponent const&, class HitboxComponent&);

MCAPI void
_tickShulkerUpdatePositionSystem5(struct StateVectorComponent const&, struct SynchedActorDataComponent&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&);
// NOLINTEND

}; // namespace ActorSetPosSystemImpl
