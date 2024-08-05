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
    // vIndex: 0
    virtual ~JigsawStructureBuilder();

    MCAPI struct br::worldgen::JigsawStructure build();

    MCAPI class br::worldgen::JigsawStructureBuilder& dimensionPadding(int);

    MCAPI class br::worldgen::JigsawStructureBuilder& maxDepth(schar);

    MCAPI class br::worldgen::JigsawStructureBuilder& maxDistanceFromCenter(int);

    MCAPI class br::worldgen::JigsawStructureBuilder&
    poolAliases(std::vector<std::shared_ptr<class PoolAliasBinding>>&&);

    MCAPI class br::worldgen::JigsawStructureBuilder& projectStartToHeightmap(::br::worldgen::HeightmapProjection::Type
    );

    MCAPI class br::worldgen::JigsawStructureBuilder& startHeight(class br::worldgen::StructureHeightProvider&&);

    MCAPI class br::worldgen::JigsawStructureBuilder& startPool(std::string_view);

    MCAPI static class br::worldgen::JigsawStructureBuilder create(std::string_view, ::StructureFeatureType);

    // NOLINTEND
};

}; // namespace br::worldgen
