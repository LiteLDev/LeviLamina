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
    // symbol:
    // ?findNearestStructureFeature@ChunkGeneratorStructureState@worldgen@br@@QEBA?AV?$optional@VBlockPos@@@std@@AEAVDimension@@W4StructureFeatureType@@AEBVBlockPos@@AEBVBiomeSource@@_N@Z
    MCAPI std::optional<class BlockPos> findNearestStructureFeature(
        class Dimension&,
        ::StructureFeatureType,
        class BlockPos const&,
        class BiomeSource const&,
        bool
    ) const;

    // symbol: ??4ChunkGeneratorStructureState@worldgen@br@@QEAAAEAU012@$$QEAU012@@Z
    MCAPI struct br::worldgen::ChunkGeneratorStructureState&
    operator=(struct br::worldgen::ChunkGeneratorStructureState&&);

    // symbol: ??1ChunkGeneratorStructureState@worldgen@br@@QEAA@XZ
    MCAPI ~ChunkGeneratorStructureState();

    // symbol:
    // ?createFlat@ChunkGeneratorStructureState@worldgen@br@@SA?AU123@_JAEBVBiomeSource@@V?$vector@V?$shared_ptr@$$CBUStructureSet@worldgen@br@@@std@@V?$allocator@V?$shared_ptr@$$CBUStructureSet@worldgen@br@@@std@@@2@@std@@@Z
    MCAPI static struct br::worldgen::ChunkGeneratorStructureState
    createFlat(int64, class BiomeSource const&, std::vector<std::shared_ptr<struct br::worldgen::StructureSet const>>);

    // symbol:
    // ?createNormal@ChunkGeneratorStructureState@worldgen@br@@SA?AU123@_JAEBVBiomeSource@@AEBVStructureSetRegistry@23@@Z
    MCAPI static struct br::worldgen::ChunkGeneratorStructureState
    createNormal(int64, class BiomeSource const&, class br::worldgen::StructureSetRegistry const&);

    // symbol: ?createVoid@ChunkGeneratorStructureState@worldgen@br@@SA?AU123@_J@Z
    MCAPI static struct br::worldgen::ChunkGeneratorStructureState createVoid(int64);

    // NOLINTEND
};

}; // namespace br::worldgen
