#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class EndCityFeature : public ::StructureFeature {
public:
    uchar filler[368];

    // prevent constructor by default
    EndCityFeature& operator=(EndCityFeature const&);
    EndCityFeature(EndCityFeature const&);
    EndCityFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EndCityFeature@@UEAA@XZ
    virtual ~EndCityFeature() = default;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@EndCityFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@EndCityFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@EndCityFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const&,
        class Random&         random,
        class ChunkPos const& pos,
        uint                  levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@EndCityFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& pos, class IPreliminarySurfaceProvider const&);

    // symbol: ??0EndCityFeature@@QEAA@AEAVDimension@@AEAI@Z
    MCAPI EndCityFeature(class Dimension& dimension, uint& seed);

    // NOLINTEND
};
