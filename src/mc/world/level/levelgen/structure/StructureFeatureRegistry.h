#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

class StructureFeature;
class StructureFeatureRegistry {
public:

    std::vector<std::unique_ptr<StructureFeature>> mStructureFeatures;

    // prevent constructor by default
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&);
    StructureFeatureRegistry(StructureFeatureRegistry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0StructureFeatureRegistry@@QEAA@XZ
    MCAPI StructureFeatureRegistry();

    // symbol:
    // ?findNearestStructureFeature@StructureFeatureRegistry@@QEAA_NAEAVDimension@@AEAVIPreliminarySurfaceProvider@@W4StructureFeatureType@@AEBVBlockPos@@AEAV5@AEBVBiomeSource@@_NV?$optional@VHashedString@@@std@@@Z
    MCAPI bool
    findNearestStructureFeature(class Dimension&, class IPreliminarySurfaceProvider&, ::StructureFeatureType, class BlockPos const&, class BlockPos&, class BiomeSource const&, bool, std::optional<class HashedString>);

    // symbol: ?findStructureFeatureTypeAt@StructureFeatureRegistry@@QEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    MCAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);

    // symbol: ?getStructureFeatureOfType@StructureFeatureRegistry@@QEBAPEAVStructureFeature@@W4StructureFeatureType@@@Z
    MCAPI class StructureFeature* getStructureFeatureOfType(::StructureFeatureType) const;

    // symbol: ?isStructureFeatureTypeAt@StructureFeatureRegistry@@QEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    MCAPI bool isStructureFeatureTypeAt(class BlockPos const&, ::StructureFeatureType) const;

    // symbol: ??1StructureFeatureRegistry@@QEAA@XZ
    MCAPI ~StructureFeatureRegistry();

    // NOLINTEND
};
