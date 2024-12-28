#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLoadPriority {
public:
    // prevent constructor by default
    ChunkLoadPriority& operator=(ChunkLoadPriority const&);
    ChunkLoadPriority(ChunkLoadPriority const&);
    ChunkLoadPriority();
};
