#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class EntityContext;
// clang-format on

namespace ActorChunkPosition {
// functions
// NOLINTBEGIN
MCAPI ::ChunkPos const& getChunkPosition(::EntityContext const& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void setChunkPosition(::EntityContext& provider, ::ChunkPos const& chunkPosition);
// NOLINTEND

} // namespace ActorChunkPosition
