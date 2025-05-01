#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkLocalNoiseCache;
class SurfaceLevelCache;
// clang-format on

class WorldGenCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkcf4614;
    ::ll::UntypedStorage<8, 56> mUnkce6009;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldGenCache& operator=(WorldGenCache const&);
    WorldGenCache(WorldGenCache const&);
    WorldGenCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldGenCache(::ChunkLocalNoiseCache chunkLocalNoiseCache, ::SurfaceLevelCache surfaceLevelCache);

    MCNAPI ~WorldGenCache();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkLocalNoiseCache chunkLocalNoiseCache, ::SurfaceLevelCache surfaceLevelCache);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
