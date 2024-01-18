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

    template <std::derived_from<StructureFeature> T, class... Args>
    T& registerFeature(Args&&... args) {
        auto ptr = std::make_unique<T>(std::forward<Args>(args)...);
        auto res = *ptr;
        mStructureFeatures.push_back(std::move(ptr));
        return res;
    }

public:
    // NOLINTBEGIN
    // symbol: ??0StructureFeatureRegistry@@QEAA@XZ
    MCAPI StructureFeatureRegistry();

    // symbol:
    // ?findNearestStructureFeature@StructureFeatureRegistry@@QEAA_NAEAVDimension@@AEAVIPreliminarySurfaceProvider@@W4StructureFeatureType@@AEBVBlockPos@@AEAV5@AEBVBiomeSource@@_NV?$optional@VHashedString@@@std@@@Z
    MCAPI bool
    findNearestStructureFeature(class Dimension&, class IPreliminarySurfaceProvider&, ::StructureFeatureType, class BlockPos const&, class BlockPos&, class BiomeSource const&, bool, std::optional<class HashedString>);

    // symbol: ?findStructureFeatureTypeAt@StructureFeatureRegistry@@QEAA?AW4StructureFeatureType@@AEBVBlockPos@@@Z
    MCAPI ::StructureFeatureType findStructureFeatureTypeAt(class BlockPos const& pos);

    // symbol: ?getStructureFeatureOfType@StructureFeatureRegistry@@QEBAPEAVStructureFeature@@W4StructureFeatureType@@@Z
    MCAPI class StructureFeature* getStructureFeatureOfType(::StructureFeatureType type) const;

    // symbol: ?isStructureFeatureTypeAt@StructureFeatureRegistry@@QEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    MCAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    // symbol: ??1StructureFeatureRegistry@@QEAA@XZ
    MCAPI ~StructureFeatureRegistry();

    // NOLINTEND
};
