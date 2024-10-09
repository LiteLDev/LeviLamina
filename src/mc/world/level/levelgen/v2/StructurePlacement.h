#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/RandomSpreadPlacement.h"

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
    MCAPI bool
    isStructureChunk(struct br::worldgen::ChunkGeneratorStructureState const& state, class ChunkPos chunkPos) const;

    MCAPI static struct br::worldgen::StructurePlacement
    randomeSpread(int spacing, int separation, int salt, ::br::worldgen::RandomSpreadPlacement::Type type);

    // NOLINTEND
};

}; // namespace br::worldgen
