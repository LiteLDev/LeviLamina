#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/RandomSpreadPlacement.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
// clang-format on

namespace br::worldgen {

struct StructurePlacement {
public:
    // prevent constructor by default
    StructurePlacement& operator=(StructurePlacement const&);
    StructurePlacement(StructurePlacement const&);
    StructurePlacement();

public:
    // NOLINTBEGIN
    // symbol: ?isStructureChunk@StructurePlacement@worldgen@br@@QEBA_NAEBUChunkGeneratorStructureState@23@VChunkPos@@@Z
    MCAPI bool isStructureChunk(struct br::worldgen::ChunkGeneratorStructureState const&, class ChunkPos) const;

    // symbol: ?randomeSpread@StructurePlacement@worldgen@br@@SA?AU123@HHHW4Type@RandomSpreadPlacement@23@@Z
    MCAPI static struct br::worldgen::StructurePlacement
    randomeSpread(int, int, int, ::br::worldgen::RandomSpreadPlacement::Type);

    // NOLINTEND
};

}; // namespace br::worldgen
