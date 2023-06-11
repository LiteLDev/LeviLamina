/**
 * @file  WorldGenCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class WorldGenCache.
 *
 */
class WorldGenCache {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WORLDGENCACHE
public:
    class WorldGenCache& operator=(class WorldGenCache const &) = delete;
    WorldGenCache(class WorldGenCache const &) = delete;
    WorldGenCache() = delete;
#endif

public:
    /**
     * @symbol ??0WorldGenCache\@\@QEAA\@VChunkLocalNoiseCache\@\@VSurfaceLevelCache\@\@\@Z
     */
    MCAPI WorldGenCache(class ChunkLocalNoiseCache, class SurfaceLevelCache);
    /**
     * @symbol ?getChunkLocalNoiseCache\@WorldGenCache\@\@QEBAAEBVChunkLocalNoiseCache\@\@XZ
     */
    MCAPI class ChunkLocalNoiseCache const & getChunkLocalNoiseCache() const;
    /**
     * @symbol ??1WorldGenCache\@\@QEAA\@XZ
     */
    MCAPI ~WorldGenCache();

};
