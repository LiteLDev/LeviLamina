#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
namespace br::worldgen { struct StructurePlacement; }
// clang-format on

namespace br::worldgen {

class RandomSpreadPlacement {
public:
    // RandomSpreadPlacement inner types define
    enum class Type {};

public:
    // prevent constructor by default
    RandomSpreadPlacement& operator=(RandomSpreadPlacement const&);
    RandomSpreadPlacement(RandomSpreadPlacement const&);
    RandomSpreadPlacement();

public:
    // NOLINTBEGIN
    MCAPI class ChunkPos placementChunk(
        struct br::worldgen::StructurePlacement const&           def,
        struct br::worldgen::ChunkGeneratorStructureState const& state,
        class ChunkPos                                           chunkPos
    ) const;

    // NOLINTEND
};

}; // namespace br::worldgen
