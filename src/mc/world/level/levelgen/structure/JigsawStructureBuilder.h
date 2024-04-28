#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/Type.h"
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
class PoolAliasBinding;
namespace br::worldgen { class StructureHeightProvider; }
namespace br::worldgen { struct JigsawStructure; }
// clang-format on

namespace br::worldgen {

class JigsawStructureBuilder {
public:
    // prevent constructor by default
    JigsawStructureBuilder& operator=(JigsawStructureBuilder const&);
    JigsawStructureBuilder(JigsawStructureBuilder const&);
    JigsawStructureBuilder();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1JigsawStructureBuilder@worldgen@br@@UEAA@XZ
    virtual ~JigsawStructureBuilder();

    // symbol: ?build@JigsawStructureBuilder@worldgen@br@@QEAA?AUJigsawStructure@23@XZ
    MCAPI struct br::worldgen::JigsawStructure build();

    // symbol: ?dimensionPadding@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@H@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& dimensionPadding(int);

    // symbol: ?maxDepth@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@C@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& maxDepth(schar);

    // symbol: ?maxDistanceFromCenter@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@H@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& maxDistanceFromCenter(int);

    // symbol:
    // ?poolAliases@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@$$QEAV?$vector@V?$shared_ptr@VPoolAliasBinding@@@std@@V?$allocator@V?$shared_ptr@VPoolAliasBinding@@@std@@@2@@std@@@Z
    MCAPI class br::worldgen::JigsawStructureBuilder&
    poolAliases(std::vector<std::shared_ptr<class PoolAliasBinding>>&&);

    // symbol: ?projectStartToHeightmap@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@W4Type@HeightmapProjection@23@@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& projectStartToHeightmap(::br::worldgen::HeightmapProjection::Type
    );

    // symbol: ?startHeight@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@$$QEAVStructureHeightProvider@23@@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& startHeight(class br::worldgen::StructureHeightProvider&&);

    // symbol:
    // ?startPool@JigsawStructureBuilder@worldgen@br@@QEAAAEAV123@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI class br::worldgen::JigsawStructureBuilder& startPool(std::string_view);

    // symbol:
    // ?create@JigsawStructureBuilder@worldgen@br@@SA?AV123@V?$basic_string_view@DU?$char_traits@D@std@@@std@@W4StructureFeatureType@@@Z
    MCAPI static class br::worldgen::JigsawStructureBuilder create(std::string_view, ::StructureFeatureType);

    // NOLINTEND
};

}; // namespace br::worldgen
