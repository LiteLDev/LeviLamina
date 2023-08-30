#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadPriority {

public:
    // prevent constructor by default
    ChunkLoadPriority& operator=(ChunkLoadPriority const&) = delete;
    ChunkLoadPriority(ChunkLoadPriority const&)            = delete;
    ChunkLoadPriority()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getPlayerChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@\@Z
     */
    MCAPI static int32_t getPlayerChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&);
    /**
     * @symbol ?getTickingAreaChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI static int32_t
    getTickingAreaChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&, bool);
    // NOLINTEND
};
