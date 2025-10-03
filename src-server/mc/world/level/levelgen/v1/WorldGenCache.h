#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v1/ChunkLocalNoiseCache.h"
#include "mc/world/level/levelgen/v1/SurfaceLevelCache.h"

class WorldGenCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ChunkLocalNoiseCache> mChunkLocalNoiseCache;
    ::ll::TypedStorage<8, 56, ::SurfaceLevelCache>    mSurfaceLevelCache;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenCache();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldGenCache(::ChunkLocalNoiseCache chunkLocalNoiseCache, ::SurfaceLevelCache surfaceLevelCache);

    MCAPI ~WorldGenCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkLocalNoiseCache chunkLocalNoiseCache, ::SurfaceLevelCache surfaceLevelCache);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
