#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadPriority {

public:
    // prevent constructor by default
    ChunkLoadPriority& operator=(ChunkLoadPriority const&) = delete;
    ChunkLoadPriority(ChunkLoadPriority const&)            = delete;
    ChunkLoadPriority()                                    = delete;

public:
    /**
     * @symbol ?getPlayerChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@\@Z
     */
    MCAPI static int getPlayerChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&); // NOLINT
    /**
     * @symbol ?getTickingAreaChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI static int
    getTickingAreaChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&, bool); // NOLINT
};
