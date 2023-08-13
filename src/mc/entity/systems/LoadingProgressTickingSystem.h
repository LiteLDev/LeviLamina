#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LoadingProgressTickingSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    LoadingProgressTickingSystem& operator=(LoadingProgressTickingSystem const&) = delete;
    LoadingProgressTickingSystem(LoadingProgressTickingSystem const&)            = delete;
    LoadingProgressTickingSystem()                                               = delete;

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mChunksNeededForLoadOffsets\@LoadingProgressTickingSystem\@\@0V?$vector\@VChunkPos\@\@V?$allocator\@VChunkPos\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<class ChunkPos> const mChunksNeededForLoadOffsets;
    // NOLINTEND
};
