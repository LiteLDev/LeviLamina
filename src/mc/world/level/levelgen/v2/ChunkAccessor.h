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
    // prevent constructor by default
    ChunkAccessor& operator=(ChunkAccessor const&);
    ChunkAccessor(ChunkAccessor const&);
    ChunkAccessor();

public:
    // NOLINTBEGIN
    MCAPI ChunkAccessor(class Dimension& dimension, class BiomeSource const& biomeSource);

    MCAPI int getFirstFreeHeight(int x, int z, ::br::worldgen::HeightmapProjection::Type heightmapProjection) const;

    MCAPI ~ChunkAccessor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace br::worldgen
