#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct ChunkPositionComponent;
struct StateVectorComponent;
// clang-format on

namespace ActorSetPosSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void _tickChunkMoveNeededSystemSynchronous4(
    ::ActorOwnerComponent const&    actorOwnerComponent,
    ::ChunkPositionComponent const& chunkPositionComponent,
    ::StateVectorComponent const&   stateVectorComponent
);
// NOLINTEND

} // namespace ActorSetPosSystemImpl
