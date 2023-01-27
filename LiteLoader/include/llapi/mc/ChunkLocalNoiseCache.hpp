/**
 * @file  ChunkLocalNoiseCache.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1562009742
     * @symbol  ??0ChunkLocalNoiseCache\@\@QEAA\@XZ
     */
    MCAPI ChunkLocalNoiseCache();
    /**
     * @hash   918127014
     * @symbol  ??0ChunkLocalNoiseCache\@\@QEAA\@V?$DividedPos2d\@$03\@\@H\@Z
     */
    MCAPI ChunkLocalNoiseCache(class DividedPos2d<4>, int);
    /**
     * @hash   -1063684434
     * @symbol  ?getCacheEntry\@ChunkLocalNoiseCache\@\@QEBAAEBUCacheEntry\@1\@AEBV?$DividedPos2d\@$03\@\@\@Z
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry const & getCacheEntry(class DividedPos2d<4> const &) const;
    /**
     * @hash   1874940822
     * @symbol  ?setCacheEntry\@ChunkLocalNoiseCache\@\@QEAAXAEBV?$DividedPos2d\@$03\@\@AEBUCacheEntry\@1\@\@Z
     */
    MCAPI void setCacheEntry(class DividedPos2d<4> const &, struct ChunkLocalNoiseCache::CacheEntry const &);
    /**
     * @hash   -1391143024
     * @symbol  ??1ChunkLocalNoiseCache\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLocalNoiseCache();

};