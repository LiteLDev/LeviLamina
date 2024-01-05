#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class OceanMonumentFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    OceanMonumentFeature& operator=(OceanMonumentFeature const&);
    OceanMonumentFeature(OceanMonumentFeature const&);
    OceanMonumentFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanMonumentFeature@@UEAA@XZ
    virtual ~OceanMonumentFeature() = default;

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@OceanMonumentFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@OceanMonumentFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@OceanMonumentFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4, symbol: ?initMobSpawnTypes@OceanMonumentFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry& spawnAreas);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@OceanMonumentFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@OceanMonumentFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // symbol: ??0OceanMonumentFeature@@QEAA@I@Z
    MCAPI explicit OceanMonumentFeature(uint seed);

    // NOLINTEND
};
