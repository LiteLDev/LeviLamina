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
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache surfaceLevelCache);

    MCAPI class ChunkLocalNoiseCache const& getChunkLocalNoiseCache() const;

    MCAPI class SurfaceLevelCache const& getSurfaceLevelCache() const;

    MCAPI ~WorldGenCache();

    // NOLINTEND
};
