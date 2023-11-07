#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class PillagerOutpostFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    PillagerOutpostFeature& operator=(PillagerOutpostFeature const&);
    PillagerOutpostFeature(PillagerOutpostFeature const&);
    PillagerOutpostFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PillagerOutpostFeature@@UEAA@XZ
    virtual ~PillagerOutpostFeature() = default;

    // vIndex: 1, symbol: ?shouldAddHardcodedSpawnAreas@PillagerOutpostFeature@@UEBA_NXZ
    virtual bool shouldAddHardcodedSpawnAreas() const;

    // vIndex: 2, symbol: ?shouldPostProcessMobs@PillagerOutpostFeature@@UEBA_NXZ
    virtual bool shouldPostProcessMobs() const;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@PillagerOutpostFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 4, symbol: ?initMobSpawnTypes@PillagerOutpostFeature@@UEAAXAEAVHardcodedSpawnAreaRegistry@@@Z
    virtual void initMobSpawnTypes(class HardcodedSpawnAreaRegistry&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@PillagerOutpostFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6, symbol:
    // ?createStructureStart@PillagerOutpostFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ??0PillagerOutpostFeature@@QEAA@I@Z
    MCAPI explicit PillagerOutpostFeature(uint);

    // NOLINTEND
};
