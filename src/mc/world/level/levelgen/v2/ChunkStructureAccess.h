#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct ChunkStructureAccess {
public:
    // prevent constructor by default
    ChunkStructureAccess& operator=(ChunkStructureAccess const&);
    ChunkStructureAccess(ChunkStructureAccess const&);
    ChunkStructureAccess();
};

}; // namespace br::worldgen
