#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldGenCache {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCACHE
public:
    WorldGenCache& operator=(WorldGenCache const&) = delete;
    WorldGenCache(WorldGenCache const&)            = delete;
    WorldGenCache()                                = delete;
#endif

public:
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
};
