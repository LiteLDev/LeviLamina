#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class Dimension;
// clang-format on

namespace br::worldgen {

class ChunkAccessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd0f08a;
    ::ll::UntypedStorage<8, 8> mUnk12ffed;
    ::ll::UntypedStorage<8, 8> mUnk68e9a8;
    ::ll::UntypedStorage<8, 8> mUnka89f52;
    ::ll::UntypedStorage<8, 8> mUnk4a051d;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkAccessor& operator=(ChunkAccessor const&);
    ChunkAccessor(ChunkAccessor const&);
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

} // namespace br::worldgen
