/**
 * @file  ChunkLocalNoiseCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkLocalNoiseCache.
 *
 */
class ChunkLocalNoiseCache {

#define AFTER_EXTRA
// Add Member There
public:
struct CacheEntry {
    CacheEntry() = delete;
    CacheEntry(CacheEntry const&) = delete;
    CacheEntry(CacheEntry const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKLOCALNOISECACHE
public:
    class ChunkLocalNoiseCache& operator=(class ChunkLocalNoiseCache const &) = delete;
    ChunkLocalNoiseCache(class ChunkLocalNoiseCache const &) = delete;
#endif

public:
    /**
     * @hash   1855387730
     * @symbol ??0ChunkLocalNoiseCache@@QEAA@XZ
     */
    MCAPI ChunkLocalNoiseCache();
    /**
     * @hash   40557190
     * @symbol ??0ChunkLocalNoiseCache@@QEAA@V?$DividedPos2d@$03@@H@Z
     */
    MCAPI ChunkLocalNoiseCache(class DividedPos2d<4>, int);
    /**
     * @hash   -1941254258
     * @symbol ?getCacheEntry@ChunkLocalNoiseCache@@QEBAAEBUCacheEntry@1@AEBV?$DividedPos2d@$03@@@Z
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry const & getCacheEntry(class DividedPos2d<4> const &) const;
    /**
     * @hash   997370998
     * @symbol ?setCacheEntry@ChunkLocalNoiseCache@@QEAAXAEBV?$DividedPos2d@$03@@AEBUCacheEntry@1@@Z
     */
    MCAPI void setCacheEntry(class DividedPos2d<4> const &, struct ChunkLocalNoiseCache::CacheEntry const &);
    /**
     * @hash   -1636913008
     * @symbol ??1ChunkLocalNoiseCache@@QEAA@XZ
     */
    MCAPI ~ChunkLocalNoiseCache();

};