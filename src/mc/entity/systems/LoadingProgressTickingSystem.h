#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class LoadingProgressTickingSystem : public ::ITickingSystem {
public:
    // prevent constructor by default
    LoadingProgressTickingSystem& operator=(LoadingProgressTickingSystem const&);
    LoadingProgressTickingSystem(LoadingProgressTickingSystem const&);
    LoadingProgressTickingSystem();

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mChunksNeededForLoadOffsets@LoadingProgressTickingSystem@@0V?$vector@VChunkPos@@V?$allocator@VChunkPos@@@std@@@std@@B
    MCAPI static std::vector<class ChunkPos> const mChunksNeededForLoadOffsets;

    // NOLINTEND
};
