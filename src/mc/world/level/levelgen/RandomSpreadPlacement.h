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
    // symbol:
    // ?placementChunk@RandomSpreadPlacement@worldgen@br@@QEBA?AVChunkPos@@AEBUStructurePlacement@23@AEBUChunkGeneratorStructureState@23@V4@@Z
    MCAPI class ChunkPos placementChunk(
        struct br::worldgen::StructurePlacement const&,
        struct br::worldgen::ChunkGeneratorStructureState const&,
        class ChunkPos
    ) const;

    // NOLINTEND
};

}; // namespace br::worldgen
