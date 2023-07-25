#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LoadingProgressTickingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOADINGPROGRESSTICKINGSYSTEM
public:
    LoadingProgressTickingSystem& operator=(LoadingProgressTickingSystem const&) = delete;
    LoadingProgressTickingSystem(LoadingProgressTickingSystem const&)            = delete;
    LoadingProgressTickingSystem()                                               = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol
     * ?mChunksNeededForLoadOffsets\@LoadingProgressTickingSystem\@\@0V?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<class ChunkPos> const mChunksNeededForLoadOffsets;
};
