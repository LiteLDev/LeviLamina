#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldGenCache {
public:
    // prevent constructor by default
    WorldGenCache& operator=(WorldGenCache const&);
    WorldGenCache(WorldGenCache const&);
    WorldGenCache();

public:
    // NOLINTBEGIN
    // symbol: ??0WorldGenCache@@QEAA@VChunkLocalNoiseCache@@VSurfaceLevelCache@@@Z
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache surfaceLevelCache);

    // symbol: ?getChunkLocalNoiseCache@WorldGenCache@@QEBAAEBVChunkLocalNoiseCache@@XZ
    MCAPI class ChunkLocalNoiseCache const& getChunkLocalNoiseCache() const;

    // symbol: ?getSurfaceLevelCache@WorldGenCache@@QEBAAEBVSurfaceLevelCache@@XZ
    MCAPI class SurfaceLevelCache const& getSurfaceLevelCache() const;

    // symbol: ??1WorldGenCache@@QEAA@XZ
    MCAPI ~WorldGenCache();

    // NOLINTEND
};
