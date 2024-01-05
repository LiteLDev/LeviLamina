#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BiomeSource {
public:
    // prevent constructor by default
    BiomeSource& operator=(BiomeSource const&);
    BiomeSource(BiomeSource const&);
    BiomeSource();

public:
    // NOLINTBEGIN
    // symbol: ?getAreaIterator@BiomeSource@@SA?AVBlockPosIterator@@AEBVBoundingBox@@I@Z
    MCAPI static class BlockPosIterator getAreaIterator(class BoundingBox const&, uint scale);

    // NOLINTEND
};
