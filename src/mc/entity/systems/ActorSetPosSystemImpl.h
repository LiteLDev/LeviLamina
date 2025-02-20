#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class HitboxComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorChunkMoveFlagComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorLocalPlayerEntityMovedFlagComponent;
struct ActorSetPositionRequestComponent;
struct ChunkPositionComponent;
struct OffsetsComponent;
struct PaintingFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace ActorSetPosSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void _tickActorUpdatePositionAndAABBSystem2(
    ::ActorSetPositionRequestComponent const& positionUpdateRequest,
    ::OffsetsComponent const&                 heightOffsetComponent,
    ::AABBShapeComponent&                     aabbShapeComponent,
    ::StateVectorComponent&                   stateVectorComponent,
    ::Optional<::PaintingFlagComponent>       isPainting
);

MCAPI void _tickAddLocalPlayerEntityMovedSystemAsynchronous1(
    ::StrictEntityContext& context,
    ::EntityModifier<
        ::ActorChunkMoveFlagComponent,
        ::ActorLocalPlayerEntityMovedFlagComponent,
        ::ActorSetPositionRequestComponent> modifier
);

MCAPI void _tickChunkMoveNeededSystemAsynchronous4(
    ::StrictEntityContext&          context,
    ::ChunkPositionComponent const& chunkPositionComponent,
    ::StateVectorComponent const&   stateVectorComponent,
    ::EntityModifier<
        ::ActorChunkMoveFlagComponent,
        ::ActorLocalPlayerEntityMovedFlagComponent,
        ::ActorSetPositionRequestComponent> modifier
);

MCAPI void _tickChunkMoveNeededSystemSynchronous4(
    ::ActorOwnerComponent const&    actorOwnerComponent,
    ::ChunkPositionComponent const& chunkPositionComponent,
    ::StateVectorComponent const&   stateVectorComponent
);

MCAPI void _tickMoveHitboxSystem3(
    ::ActorSetPositionRequestComponent const& positionUpdateComponent,
    ::HitboxComponent&                        hitboxComponent
);

MCAPI void _tickShulkerUpdatePositionSystem5(
    ::StateVectorComponent const&   stateVectorComponent,
    ::SynchedActorDataComponent&    synchedActorDataComponent,
    ::ActorDataFlagComponent&       actorDataFlagComponent,
    ::ActorDataDirtyFlagsComponent& dirtyFlagsComponent
);
// NOLINTEND

} // namespace ActorSetPosSystemImpl
