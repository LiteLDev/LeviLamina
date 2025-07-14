#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"
#include "mc/world/level/levelgen/v2/JigsawExpansion.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::br::worldgen::GenerationStub> construct(
        ::br::worldgen::GenerationContext&        context,
        ::br::worldgen::WorldGenContext const&    worldGenContext,
        ::std::string_view                        startPool,
        ::std::string_view                        startJigsawName,
        int                                       maxDepth,
        ::BlockPos                                startPos,
        ::br::worldgen::HeightmapProjection::Type heightmapProjection,
        int                                       maxDistanceFromCenter,
        ::br::worldgen::DimensionPadding          dimensionPadding,
        ::PoolAliasBinding::PoolAliasLookup&&     poolAliasLookup,
        ::br::worldgen::JigsawExpansion           expansion,
        ::br::worldgen::LiquidSettings            liquidSettings
    );
    // NOLINTEND
};

} // namespace br::worldgen
