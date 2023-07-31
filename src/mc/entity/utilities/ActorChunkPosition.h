#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorChunkPosition {
// NOLINTBEGIN
/**
 * @symbol ?getChunkPosition\@ActorChunkPosition\@\@YAAEBVChunkPos\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class ChunkPos const& getChunkPosition(class EntityContext const&);
/**
 * @symbol ?initializeActor\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&);
/**
 * @symbol ?setChunkPosition\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@AEBVChunkPos\@\@\@Z
 */
MCAPI void setChunkPosition(class EntityContext&, class ChunkPos const&);
// NOLINTEND

}; // namespace ActorChunkPosition
