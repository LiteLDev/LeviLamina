#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/chunk/ChunkGeneratorStructureState.h"
#include "mc/world/level/levelgen/structure/StructureCache.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeatureType.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { class StructureCache; }
// clang-format on

class StructureFeature;

class StructureFeatureRegistry {
public:
    br::worldgen::ChunkGeneratorStructureState     mChunkGeneratorStructureState; // this+0x0
    std::vector<std::unique_ptr<StructureFeature>> mStructureFeatures;            // this+0x30
    br::worldgen::StructureCache                   mStructureCache;               // this+0x48

public:
    // prevent constructor by default
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&);
    StructureFeatureRegistry(StructureFeatureRegistry const&);

public:
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

    // symbol: ?isStructureFeatureTypeAt@StructureFeatureRegistry@@QEBA_NAEBVBlockPos@@W4StructureFeatureType@@@Z
    MCAPI bool isStructureFeatureTypeAt(class BlockPos const& pos, ::StructureFeatureType type) const;

    // symbol: ?structureCache@StructureFeatureRegistry@@QEAAAEAVStructureCache@worldgen@br@@XZ
    MCAPI class br::worldgen::StructureCache& structureCache();

    // symbol: ?tick@StructureFeatureRegistry@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?waitForBlueprints@StructureFeatureRegistry@@QEBAXXZ
    MCAPI void waitForBlueprints() const;

    // symbol: ??1StructureFeatureRegistry@@QEAA@XZ
    MCAPI ~StructureFeatureRegistry();

    // NOLINTEND
};
