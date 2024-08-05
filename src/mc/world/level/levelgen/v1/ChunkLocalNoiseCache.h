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
        float mShiftedX;
        float mShiftedZ;
        float mContinentalness;
        float mWeirdness;
        float mErosion;
        float mOffset;
        float mFactor;
        float mJag;
        float mTemperature;
        float mHumidity;
    };

    DividedPos2d<4> const                         mFirstQuartPos;     // this+0x0
    int const                                     mCellCountXZ;       // this+0x8
    std::vector<ChunkLocalNoiseCache::CacheEntry> mNoiseCacheEntries; // this+0x10

public:
    // prevent constructor by default
    ChunkLocalNoiseCache& operator=(ChunkLocalNoiseCache const&);
    ChunkLocalNoiseCache(ChunkLocalNoiseCache const&);

public:
    // NOLINTBEGIN
    MCAPI ChunkLocalNoiseCache();

    MCAPI ChunkLocalNoiseCache(class DividedPos2d<4>, int);

    MCAPI struct ChunkLocalNoiseCache::CacheEntry const& getCacheEntry(class DividedPos2d<4> const&) const;

    MCAPI void setCacheEntry(class DividedPos2d<4> const&, struct ChunkLocalNoiseCache::CacheEntry const&);

    MCAPI ~ChunkLocalNoiseCache();

    // NOLINTEND
};
