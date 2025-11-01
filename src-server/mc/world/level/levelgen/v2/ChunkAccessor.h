#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class ChunkPos;
class Dimension;
namespace br::worldgen { struct BlockVolumeCacheItem; }
// clang-format on

namespace br::worldgen {

class ChunkAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Dimension*>> mDimension;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::BiomeSource const*>> mBiomeSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::unordered_map<::ChunkPos, ::br::worldgen::BlockVolumeCacheItem>>> mBlockCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::unordered_map<::ChunkPos, ::std::unique_ptr<::std::vector<short>>>>> mChunkHeightCache;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkAccessor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkAccessor(::Dimension& dimension, ::BiomeSource const& biomeSource);

    MCAPI int getFirstFreeHeight(int x, int z, ::br::worldgen::HeightmapProjection::Type heightmapProjection) const;

    MCAPI ~ChunkAccessor();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Dimension& dimension, ::BiomeSource const& biomeSource);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};

}
