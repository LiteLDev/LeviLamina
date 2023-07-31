#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/DividedPos2d.h"

class ChunkLocalNoiseCache {
public:
    // ChunkLocalNoiseCache inner types declare
    // clang-format off
    struct CacheEntry;
    // clang-format on

    // ChunkLocalNoiseCache inner types define
    struct CacheEntry {

    public:
        // prevent constructor by default
        CacheEntry& operator=(CacheEntry const&) = delete;
        CacheEntry(CacheEntry const&)            = delete;
        CacheEntry()                             = delete;
    };

public:
    // prevent constructor by default
    ChunkLocalNoiseCache& operator=(ChunkLocalNoiseCache const&) = delete;
    ChunkLocalNoiseCache(ChunkLocalNoiseCache const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ChunkLocalNoiseCache\@\@QEAA\@V?$DividedPos2d\@$03\@\@H\@Z
     */
    MCAPI ChunkLocalNoiseCache(class DividedPos2d<4>, int);
    /**
     * @symbol ??0ChunkLocalNoiseCache\@\@QEAA\@XZ
     */
    MCAPI ChunkLocalNoiseCache();
    /**
     * @symbol ?getCacheEntry\@ChunkLocalNoiseCache\@\@QEBAAEBUCacheEntry\@1\@AEBV?$DividedPos2d\@$03\@\@\@Z
     */
    MCAPI struct ChunkLocalNoiseCache::CacheEntry const& getCacheEntry(class DividedPos2d<4> const&) const;
    /**
     * @symbol ?setCacheEntry\@ChunkLocalNoiseCache\@\@QEAAXAEBV?$DividedPos2d\@$03\@\@AEBUCacheEntry\@1\@\@Z
     */
    MCAPI void setCacheEntry(class DividedPos2d<4> const&, struct ChunkLocalNoiseCache::CacheEntry const&);
    /**
     * @symbol ??1ChunkLocalNoiseCache\@\@QEAA\@XZ
     */
    MCAPI ~ChunkLocalNoiseCache();
    // NOLINTEND
};
