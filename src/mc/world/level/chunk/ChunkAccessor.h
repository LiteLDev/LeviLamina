#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/Type.h"

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
    MCAPI ChunkAccessor(class Dimension&, class BiomeSource const&);

    MCAPI int getFirstFreeHeight(int, int, ::br::worldgen::HeightmapProjection::Type) const;

    MCAPI ~ChunkAccessor();

    // NOLINTEND
};

}; // namespace br::worldgen
