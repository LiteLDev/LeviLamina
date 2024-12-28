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
namespace br::worldgen { struct DimensionPadding; }
namespace br::worldgen { struct GenerationContext; }
// clang-format on

namespace br::worldgen {

struct JigsawAssembler {
public:
    // prevent constructor by default
    JigsawAssembler& operator=(JigsawAssembler const&);
    JigsawAssembler(JigsawAssembler const&);
    JigsawAssembler();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::br::worldgen::GenerationStub> construct(
        ::br::worldgen::GenerationContext&        context,
        ::br::worldgen::WorldGenContext const&    worldGenContext,
        ::std::string_view                        startPool,
        ::std::string_view                        anchorName,
        int                                       maxDepth,
        ::BlockPos                                startPos,
        ::br::worldgen::HeightmapProjection::Type heightmapProjection,
        int                                       maxDistanceFromCenter,
        ::br::worldgen::DimensionPadding          dimensionPadding,
        ::PoolAliasBinding::PoolAliasLookup&&     poolAliasLookup,
        ::br::worldgen::JigsawExpansion           expansion
    );
    // NOLINTEND
};

} // namespace br::worldgen
