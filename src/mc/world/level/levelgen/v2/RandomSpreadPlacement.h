#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
namespace br::worldgen { struct StructurePlacement; }
// clang-format on

namespace br::worldgen {

struct RandomSpreadPlacement {
public:
    // RandomSpreadPlacement inner types define
    enum class Type : uchar {
        Linear     = 0,
        Triangular = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5b60bc;
    ::ll::UntypedStorage<4, 4> mUnk83d370;
    ::ll::UntypedStorage<1, 1> mUnk5b1cdd;
    // NOLINTEND

public:
    // prevent constructor by default
    RandomSpreadPlacement& operator=(RandomSpreadPlacement const&);
    RandomSpreadPlacement(RandomSpreadPlacement const&);
    RandomSpreadPlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ChunkPos placementChunk(
        ::br::worldgen::StructurePlacement const&           def,
        ::br::worldgen::ChunkGeneratorStructureState const& state,
        ::ChunkPos                                          chunkPos
    ) const;
    // NOLINTEND
};

} // namespace br::worldgen
