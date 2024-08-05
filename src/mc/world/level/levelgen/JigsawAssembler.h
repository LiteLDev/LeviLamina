#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/JigsawExpansion.h"
#include "mc/world/level/levelgen/Type.h"
#include "mc/world/level/levelgen/structure/PoolAliasBinding.h"

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
        struct br::worldgen::GenerationContext&,
        class br::worldgen::WorldGenContext const&,
        std::string_view,
        std::string_view,
        int,
        class BlockPos,
        ::br::worldgen::HeightmapProjection::Type,
        int,
        int,
        class PoolAliasBinding::PoolAliasLookup&&,
        ::br::worldgen::JigsawExpansion
    );

    // NOLINTEND
};

}; // namespace br::worldgen
