#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorChunkPosition {
// NOLINTBEGIN
// symbol: ?getChunkPosition@ActorChunkPosition@@YAAEBVChunkPos@@AEBVEntityContext@@@Z
MCAPI class ChunkPos const& getChunkPosition(class EntityContext const& provider);

// symbol: ?initializeActor@ActorChunkPosition@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext& provider);

// symbol: ?setChunkPosition@ActorChunkPosition@@YAXAEAVEntityContext@@AEBVChunkPos@@@Z
MCAPI void setChunkPosition(class EntityContext& provider, class ChunkPos const&);
// NOLINTEND

}; // namespace ActorChunkPosition
