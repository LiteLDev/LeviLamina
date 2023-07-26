#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadingProgressTickingSystem {

public:
    // prevent constructor by default
    LoadingProgressTickingSystem& operator=(LoadingProgressTickingSystem const&) = delete;
    LoadingProgressTickingSystem(LoadingProgressTickingSystem const&)            = delete;
    LoadingProgressTickingSystem()                                               = delete;

    // private:

private:
    /**
     * @symbol
     * ?mChunksNeededForLoadOffsets\@LoadingProgressTickingSystem\@\@0V?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<class ChunkPos> const mChunksNeededForLoadOffsets; // NOLINT
};
