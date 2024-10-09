#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class ChunkPos;
class Random;
namespace br::worldgen { struct Structure; }
// clang-format on

namespace br::worldgen {

class StructureInstance {
public:
    // prevent constructor by default
    StructureInstance& operator=(StructureInstance const&);
    StructureInstance(StructureInstance const&);
    StructureInstance();

public:
    // NOLINTBEGIN
    MCAPI bool intersects(class BoundingBox box) const;

    MCAPI bool isReference(class ChunkPos pos) const;

    MCAPI bool isValid() const;

    MCAPI bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB) const;

    MCAPI struct br::worldgen::Structure const& structure() const;

    MCAPI ::StructureFeatureType type() const;

    // NOLINTEND
};

}; // namespace br::worldgen
