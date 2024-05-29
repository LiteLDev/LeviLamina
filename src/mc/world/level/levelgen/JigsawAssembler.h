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
    // symbol:
    // ?construct@JigsawAssembler@worldgen@br@@SA?AV?$optional@VGenerationStub@worldgen@br@@@std@@AEAUGenerationContext@23@AEBVWorldGenContext@23@V?$basic_string_view@DU?$char_traits@D@std@@@5@2HVBlockPos@@W4Type@HeightmapProjection@23@HH$$QEAVPoolAliasLookup@PoolAliasBinding@@W4JigsawExpansion@23@@Z
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
