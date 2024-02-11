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
    // symbol: ??0CachedChunkBlockSource@@QEAA@AEAVBlockSource@@@Z
    MCAPI explicit CachedChunkBlockSource(class BlockSource&);

    // symbol: ?getBlock@CachedChunkBlockSource@@QEAAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& getBlock(class BlockPos const&);

    // symbol: ?getBlockSource@CachedChunkBlockSource@@QEAAAEAVBlockSource@@XZ
    MCAPI class BlockSource& getBlockSource();

    // symbol: ?getLiquidBlock@CachedChunkBlockSource@@QEAAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& getLiquidBlock(class BlockPos const&);

    // symbol: ?getMaterial@CachedChunkBlockSource@@QEAAAEBVMaterial@@AEBVBlockPos@@@Z
    MCAPI class Material const& getMaterial(class BlockPos const&);

    // symbol: ?prefetchForPosition@CachedChunkBlockSource@@QEAAXAEBVBlockPos@@@Z
    MCAPI void prefetchForPosition(class BlockPos const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updateCacheAndGetIndex@CachedChunkBlockSource@@AEAAGAEBVBlockPos@@@Z
    MCAPI ushort _updateCacheAndGetIndex(class BlockPos const&);

    // NOLINTEND
};
