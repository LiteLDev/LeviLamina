#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace br::worldgen { class GenerationStub; }
namespace br::worldgen { class WorldGenContext; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

class JigsawAssembler {
public:
    // prevent constructor by default
    JigsawAssembler& operator=(JigsawAssembler const&);
    JigsawAssembler(JigsawAssembler const&);
    JigsawAssembler();

public:
    // NOLINTBEGIN
    MCAPI static std::optional<class br::worldgen::GenerationStub> construct(
        struct br::worldgen::GenerationContext&    context,
        class br::worldgen::WorldGenContext const& worldGenContext,
        std::string_view                           startPool,
        std::string_view                           anchorName,
        int                                        maxDepth,
        class BlockPos                             startPos,
        ::br::worldgen::HeightmapProjection::Type  heightmapProjection,
        int                                        maxDistanceFromCenter,
        int                                        dimensionPadding,
        class PoolAliasBinding::PoolAliasLookup&&  poolAliasLookup,
        ::br::worldgen::JigsawExpansion            expansion
    );

    // NOLINTEND
};

}; // namespace br::worldgen
