#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Material;
// clang-format on

class CachedChunkBlockSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1eca46;
    ::ll::UntypedStorage<2, 2> mUnk1f64c6;
    ::ll::UntypedStorage<8, 8> mUnkf0a2ae;
    ::ll::UntypedStorage<2, 2> mUnk64c813;
    ::ll::UntypedStorage<8, 8> mUnk9bfa3d;
    ::ll::UntypedStorage<8, 8> mUnkb1d609;
    // NOLINTEND

public:
    // prevent constructor by default
    CachedChunkBlockSource& operator=(CachedChunkBlockSource const&);
    CachedChunkBlockSource(CachedChunkBlockSource const&);
    CachedChunkBlockSource();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CachedChunkBlockSource(::BlockSource& region);

    MCAPI ushort _updateCacheAndGetIndex(::BlockPos const& position);

    MCAPI ::Block const& getBlock(::BlockPos const& position);

    MCFOLD ::BlockSource& getBlockSource();

    MCAPI ::Block const& getLiquidBlock(::BlockPos const& position);

    MCAPI ::Material const& getMaterial(::BlockPos const& pos);

    MCAPI void prefetchForPosition(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockSource& region);
    // NOLINTEND
};
