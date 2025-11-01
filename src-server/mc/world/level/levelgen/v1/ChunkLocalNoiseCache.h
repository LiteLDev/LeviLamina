#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/DividedPos2d.h"

class ChunkLocalNoiseCache {
public:
    // ChunkLocalNoiseCache inner types declare
    // clang-format off
    struct CacheEntry;
    // clang-format on
    
    // ChunkLocalNoiseCache inner types define
    struct CacheEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> shiftedX;
        ::ll::TypedStorage<4, 4, float> shiftedZ;
        ::ll::TypedStorage<4, 4, float> continentalness;
        ::ll::TypedStorage<4, 4, float> weirdness;
        ::ll::TypedStorage<4, 4, float> erosion;
        ::ll::TypedStorage<4, 4, float> offset;
        ::ll::TypedStorage<4, 4, float> factor;
        ::ll::TypedStorage<4, 4, float> jag;
        ::ll::TypedStorage<4, 4, float> temperature;
        ::ll::TypedStorage<4, 4, float> humidity;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::DividedPos2d<4> const> mFirstQuartPos;
    ::ll::TypedStorage<4, 4, int const> mCellCountXZ;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkLocalNoiseCache::CacheEntry>> mNoiseCacheEntries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkLocalNoiseCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
