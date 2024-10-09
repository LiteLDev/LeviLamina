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
    MCAPI explicit CachedChunkBlockSource(class BlockSource& region);

    MCAPI class Block const& getBlock(class BlockPos const& position);

    MCAPI class BlockSource& getBlockSource();

    MCAPI class Block const& getLiquidBlock(class BlockPos const& position);

    MCAPI class Material const& getMaterial(class BlockPos const& pos);

    MCAPI void prefetchForPosition(class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ushort _updateCacheAndGetIndex(class BlockPos const& position);

    // NOLINTEND
};
