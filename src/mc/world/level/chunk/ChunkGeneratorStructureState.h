#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
class BiomeSource;
class BlockPos;
class Dimension;
namespace br::worldgen { class StructureSetRegistry; }
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

struct ChunkGeneratorStructureState {
public:
    // prevent constructor by default
    ChunkGeneratorStructureState& operator=(ChunkGeneratorStructureState const&);
    ChunkGeneratorStructureState(ChunkGeneratorStructureState const&);
    ChunkGeneratorStructureState();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockPos> findNearestStructureFeature(
        class Dimension&,
        ::StructureFeatureType,
        class BlockPos const&,
        class BiomeSource const&,
        bool
    ) const;

    MCAPI struct br::worldgen::ChunkGeneratorStructureState&
    operator=(struct br::worldgen::ChunkGeneratorStructureState&&);

    MCAPI ~ChunkGeneratorStructureState();

    MCAPI static struct br::worldgen::ChunkGeneratorStructureState
    createFlat(int64, class BiomeSource const&, std::vector<std::shared_ptr<struct br::worldgen::StructureSet const>>);

    MCAPI static struct br::worldgen::ChunkGeneratorStructureState
    createNormal(int64, class BiomeSource const&, class br::worldgen::StructureSetRegistry const&);

    MCAPI static struct br::worldgen::ChunkGeneratorStructureState createVoid(int64);

    // NOLINTEND
};

}; // namespace br::worldgen
