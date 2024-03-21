#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ActorSetPosSystemImpl {
// NOLINTBEGIN
// symbol:
// ?_tickActorUpdatePositionAndAABBSystem2@ActorSetPosSystemImpl@@YAXAEBUActorSetPositionRequestComponent@@AEBUOffsetsComponent@@AEAUAABBShapeComponent@@AEAUStateVectorComponent@@V?$Optional@V?$FlagComponent@UPaintingFlag@@@@@@@Z
MCAPI void
_tickActorUpdatePositionAndAABBSystem2(struct ActorSetPositionRequestComponent const&, struct OffsetsComponent const&, struct AABBShapeComponent&, struct StateVectorComponent&, class Optional<class FlagComponent<struct PaintingFlag>>);

// symbol:
// ?_tickAddLocalPlayerEntityMovedSystemAsynchronous1@ActorSetPosSystemImpl@@YAXAEAVStrictEntityContext@@V?$EntityModifier@V?$FlagComponent@UActorChunkMoveFlag@@@@V?$FlagComponent@UActorLocalPlayerEntityMovedFlag@@@@UActorSetPositionRequestComponent@@@@@Z
MCAPI void _tickAddLocalPlayerEntityMovedSystemAsynchronous1(
    class StrictEntityContext& context,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

// symbol:
// ?_tickChunkMoveNeededSystemAsynchronous4@ActorSetPosSystemImpl@@YAXAEAVStrictEntityContext@@AEBUChunkPositionComponent@@AEBUStateVectorComponent@@V?$EntityModifier@V?$FlagComponent@UActorChunkMoveFlag@@@@V?$FlagComponent@UActorLocalPlayerEntityMovedFlag@@@@UActorSetPositionRequestComponent@@@@@Z
MCAPI void _tickChunkMoveNeededSystemAsynchronous4(
    class StrictEntityContext& context,
    struct ChunkPositionComponent const&,
    struct StateVectorComponent const&,
    class EntityModifier<
        class FlagComponent<struct ActorChunkMoveFlag>,
        class FlagComponent<struct ActorLocalPlayerEntityMovedFlag>,
        struct ActorSetPositionRequestComponent> modifier
);

// symbol:
// ?_tickChunkMoveNeededSystemSynchronous4@ActorSetPosSystemImpl@@YAXAEBVActorOwnerComponent@@AEBUChunkPositionComponent@@AEBUStateVectorComponent@@@Z
MCAPI void
_tickChunkMoveNeededSystemSynchronous4(class ActorOwnerComponent const&, struct ChunkPositionComponent const&, struct StateVectorComponent const&);

// symbol:
// ?_tickMoveHitboxSystem3@ActorSetPosSystemImpl@@YAXAEBUActorSetPositionRequestComponent@@AEAVHitboxComponent@@@Z
MCAPI void _tickMoveHitboxSystem3(struct ActorSetPositionRequestComponent const&, class HitboxComponent&);

// symbol:
// ?_tickShulkerUpdatePositionSystem5@ActorSetPosSystemImpl@@YAXAEBUStateVectorComponent@@AEAUSynchedActorDataComponent@@AEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@@Z
MCAPI void
_tickShulkerUpdatePositionSystem5(struct StateVectorComponent const&, struct SynchedActorDataComponent&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&);
// NOLINTEND

}; // namespace ActorSetPosSystemImpl
