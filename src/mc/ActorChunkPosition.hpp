/**
 * @file  ActorChunkPosition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace ActorChunkPosition {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getChunkPosition\@ActorChunkPosition\@\@YAAEBVChunkPos\@\@AEBVEntityContext\@\@\@Z
     */
    MCAPI class ChunkPos const & getChunkPosition(class EntityContext const &);
    /**
     * @symbol  ?initializeActor\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void initializeActor(class EntityContext &);
    /**
     * @symbol  ?setChunkPosition\@ActorChunkPosition\@\@YAXAEAVEntityContext\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void setChunkPosition(class EntityContext &, class ChunkPos const &);

};