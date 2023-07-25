#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadPriority {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOADPRIORITY
public:
    ChunkLoadPriority& operator=(ChunkLoadPriority const&) = delete;
    ChunkLoadPriority(ChunkLoadPriority const&)            = delete;
    ChunkLoadPriority()                                    = delete;
#endif

public:
    /**
     * @symbol ?getPlayerChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@\@Z
     */
    MCAPI static int getPlayerChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&);
    /**
     * @symbol ?getTickingAreaChunkPriority\@ChunkLoadPriority\@\@SAHAEBVChunkPos\@\@0AEBVVec3\@\@_N\@Z
     */
    MCAPI static int getTickingAreaChunkPriority(class ChunkPos const&, class ChunkPos const&, class Vec3 const&, bool);
};
