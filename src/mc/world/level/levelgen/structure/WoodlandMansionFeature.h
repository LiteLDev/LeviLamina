#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class WoodlandMansionFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    WoodlandMansionFeature& operator=(WoodlandMansionFeature const&);
    WoodlandMansionFeature(WoodlandMansionFeature const&);
    WoodlandMansionFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WoodlandMansionFeature@@UEAA@XZ
    virtual ~WoodlandMansionFeature() = default;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@WoodlandMansionFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@WoodlandMansionFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@WoodlandMansionFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, uint levelSeed, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6, symbol:
    // ?createStructureStart@WoodlandMansionFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // symbol: ??0WoodlandMansionFeature@@QEAA@I@Z
    MCAPI explicit WoodlandMansionFeature(uint seed);

    // NOLINTEND
};
