#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorChunkPosition {
// NOLINTBEGIN
MCAPI class ChunkPos const& getChunkPosition(class EntityContext const& provider);

MCAPI void initializeActor(class EntityContext& provider);

MCAPI void setChunkPosition(class EntityContext& provider, class ChunkPos const&);
// NOLINTEND

}; // namespace ActorChunkPosition
