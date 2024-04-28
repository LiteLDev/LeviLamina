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
    // symbol: ?intersects@StructureInstance@worldgen@br@@QEBA_NVBoundingBox@@@Z
    MCAPI bool intersects(class BoundingBox) const;

    // symbol: ?isReference@StructureInstance@worldgen@br@@QEBA_NVChunkPos@@@Z
    MCAPI bool isReference(class ChunkPos) const;

    // symbol: ?isValid@StructureInstance@worldgen@br@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ?postProcess@StructureInstance@worldgen@br@@QEBA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    MCAPI bool postProcess(class BlockSource&, class Random&, class BoundingBox const&) const;

    // symbol: ?structure@StructureInstance@worldgen@br@@QEBAAEBUStructure@23@XZ
    MCAPI struct br::worldgen::Structure const& structure() const;

    // symbol: ?type@StructureInstance@worldgen@br@@QEBA?AW4StructureFeatureType@@XZ
    MCAPI ::StructureFeatureType type() const;

    // NOLINTEND
};

}; // namespace br::worldgen
