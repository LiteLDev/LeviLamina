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
MCNAPI ::ChunkPos const& getChunkPosition(::EntityContext const& provider);

MCNAPI void setChunkPosition(::EntityContext& provider, ::ChunkPos const& chunkPosition);
// NOLINTEND

} // namespace ActorChunkPosition
