#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CachedChunkBlockSource {
public:
    // prevent constructor by default
    CachedChunkBlockSource& operator=(CachedChunkBlockSource const&);
    CachedChunkBlockSource(CachedChunkBlockSource const&);
    CachedChunkBlockSource();

public:
    // NOLINTBEGIN
    MCAPI explicit CachedChunkBlockSource(class BlockSource&);

    MCAPI class Block const& getBlock(class BlockPos const&);

    MCAPI class BlockSource& getBlockSource();

    MCAPI class Block const& getLiquidBlock(class BlockPos const&);

    MCAPI class Material const& getMaterial(class BlockPos const&);

    MCAPI void prefetchForPosition(class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ushort _updateCacheAndGetIndex(class BlockPos const&);

    // NOLINTEND
};
