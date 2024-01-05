#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class RandomScatteredLargeFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    RandomScatteredLargeFeature& operator=(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature(RandomScatteredLargeFeature const&);
    RandomScatteredLargeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RandomScatteredLargeFeature@@UEAA@XZ
    virtual ~RandomScatteredLargeFeature() = default;

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@RandomScatteredLargeFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@RandomScatteredLargeFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@RandomScatteredLargeFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4, symbol: ?initMobSpawnTypes@RandomScatteredLargeFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@RandomScatteredLargeFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@RandomScatteredLargeFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& dimension, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& cp, class IPreliminarySurfaceProvider const&);

    // symbol: ??0RandomScatteredLargeFeature@@QEAA@I@Z
    MCAPI explicit RandomScatteredLargeFeature(uint seed);

    // NOLINTEND
};
