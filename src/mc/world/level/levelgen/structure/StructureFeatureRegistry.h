#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureCache; }
// clang-format on

class StructureFeatureRegistry {
public:
    // prevent constructor by default
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&);
    StructureFeatureRegistry(StructureFeatureRegistry const&);

public:
    // NOLINTBEGIN
    MCAPI StructureFeatureRegistry();

    MCAPI bool
    findNearestStructureFeature(class Dimension&, class IPreliminarySurfaceProvider&, ::StructureFeatureType, class BlockPos const&, class BlockPos&, class BiomeSource const&, bool, std::optional<class HashedString>);

    MCAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    MCAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    MCAPI class br::worldgen::StructureCache& structureCache();

    MCAPI void tick();

    MCAPI void waitForBlueprints() const;

    MCAPI ~StructureFeatureRegistry();

    // NOLINTEND
};
