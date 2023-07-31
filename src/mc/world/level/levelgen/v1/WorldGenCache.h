#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldGenCache {

public:
    // prevent constructor by default
    WorldGenCache& operator=(WorldGenCache const&) = delete;
    WorldGenCache(WorldGenCache const&)            = delete;
    WorldGenCache()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0WorldGenCache\@\@QEAA\@VChunkLocalNoiseCache\@\@VSurfaceLevelCache\@\@\@Z
     */
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    /**
     * @symbol ?getChunkLocalNoiseCache\@WorldGenCache\@\@QEBAAEBVChunkLocalNoiseCache\@\@XZ
     */
    MCAPI class ChunkLocalNoiseCache const& getChunkLocalNoiseCache() const;
    /**
     * @symbol ??1WorldGenCache\@\@QEAA\@XZ
     */
    MCAPI ~WorldGenCache();
    // NOLINTEND
};
