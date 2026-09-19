#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChunkStateNeighborDependency : int {
    None             = 0,
    Neighborhood     = 1,
    DecorationParity = 2,
    Unclassified     = 3,
};
