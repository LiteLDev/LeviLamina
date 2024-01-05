#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class MineshaftFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    MineshaftFeature& operator=(MineshaftFeature const&);
    MineshaftFeature(MineshaftFeature const&);
    MineshaftFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MineshaftFeature@@UEAA@XZ
    virtual ~MineshaftFeature() = default;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@MineshaftFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 5, symbol:
    // ?isFeatureChunk@MineshaftFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@MineshaftFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};
