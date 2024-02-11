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
    // symbol: ??0ChunkAccessor@worldgen@br@@QEAA@AEAVDimension@@AEBVBiomeSource@@@Z
    MCAPI ChunkAccessor(class Dimension&, class BiomeSource const&);

    // symbol: ?biomeSource@ChunkAccessor@worldgen@br@@QEBAAEBVBiomeSource@@XZ
    MCAPI class BiomeSource const& biomeSource() const;

    // symbol: ?dimension@ChunkAccessor@worldgen@br@@QEAAAEAVDimension@@XZ
    MCAPI class Dimension& dimension();

    // symbol: ?getFirstFreeHeight@ChunkAccessor@worldgen@br@@QEBAHHHW4Type@HeightmapProjection@23@@Z
    MCAPI int getFirstFreeHeight(int, int, ::br::worldgen::HeightmapProjection::Type) const;

    // symbol: ??1ChunkAccessor@worldgen@br@@QEAA@XZ
    MCAPI ~ChunkAccessor();

    // NOLINTEND
};

}; // namespace br::worldgen
