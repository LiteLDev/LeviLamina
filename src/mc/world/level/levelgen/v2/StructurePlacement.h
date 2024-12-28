#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/RandomSpreadPlacement.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct ChunkGeneratorStructureState; }
namespace br::worldgen { struct RandomSpreadPlacement; }
// clang-format on

namespace br::worldgen {

struct StructurePlacement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk95f3b5;
    ::ll::UntypedStorage<4, 4>  mUnkbf4fdb;
    ::ll::UntypedStorage<8, 8>  mUnkea3298;
    ::ll::UntypedStorage<4, 16> mUnk7d28cd;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlacement& operator=(StructurePlacement const&);
    StructurePlacement(StructurePlacement const&);
    StructurePlacement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ChunkPos calcChunkOffset(::glm::ivec2 delta) const;

    MCAPI bool isStructureChunk(::br::worldgen::ChunkGeneratorStructureState const& state, ::ChunkPos chunkPos) const;

    MCAPI ::ChunkPos
    structureChunkPos(::br::worldgen::ChunkGeneratorStructureState const& state, ::ChunkPos chunkPos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::StructurePlacement
    randomeSpread(int spacing, int separation, int salt, ::br::worldgen::RandomSpreadPlacement::Type type);
    // NOLINTEND
};

} // namespace br::worldgen
