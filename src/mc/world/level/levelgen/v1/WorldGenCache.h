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
    MCAPI WorldGenCache(class ChunkLocalNoiseCache chunkLocalNoiseCache, class SurfaceLevelCache surfaceLevelCache);

    MCAPI class ChunkLocalNoiseCache const& getChunkLocalNoiseCache() const;

    MCAPI class SurfaceLevelCache const& getSurfaceLevelCache() const;

    MCAPI ~WorldGenCache();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class ChunkLocalNoiseCache chunkLocalNoiseCache, class SurfaceLevelCache surfaceLevelCache);

    MCAPI void dtor$();

    // NOLINTEND
};
