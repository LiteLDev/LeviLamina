#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorChunkPosition {
/**
 * @symbol ?getChunkPosition\@ActorChunkPosition\@\@YAAEBVChunkPos\@\@AEBVEntityContext\@\@\@Z
 */
MCAPI class ChunkPos const& getChunkPosition(class EntityContext const&); // NOLINT
/**
 * @symbol ?initializeActor\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@\@Z
 */
MCAPI void initializeActor(class EntityContext&); // NOLINT
/**
 * @symbol ?setChunkPosition\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@AEBVChunkPos\@\@\@Z
 */
MCAPI void setChunkPosition(class EntityContext&, class ChunkPos const&); // NOLINT

}; // namespace ActorChunkPosition
