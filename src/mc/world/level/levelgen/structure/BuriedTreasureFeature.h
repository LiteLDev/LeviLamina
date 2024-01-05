#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class BuriedTreasureFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    BuriedTreasureFeature& operator=(BuriedTreasureFeature const&);
    BuriedTreasureFeature(BuriedTreasureFeature const&);
    BuriedTreasureFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BuriedTreasureFeature@@UEAA@XZ
    virtual ~BuriedTreasureFeature() = default;

    // vIndex: 3, symbol:
    // ?getNearestGeneratedFeature@BuriedTreasureFeature@@UEAA_NAEAVDimension@@AEBVBiomeSource@@AEBVBlockPos@@AEAV4@AEBVIPreliminarySurfaceProvider@@_NAEBV?$optional@VHashedString@@@std@@@Z
    virtual bool
    getNearestGeneratedFeature(class Dimension&, class BiomeSource const&, class BlockPos const&, class BlockPos&, class IPreliminarySurfaceProvider const&, bool, std::optional<class HashedString> const&);

    // vIndex: 5, symbol:
    // ?isFeatureChunk@BuriedTreasureFeature@@MEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool isFeatureChunk(
        class BiomeSource const& biomeSource,
        class Random&            random,
        class ChunkPos const&    pos,
        uint                     levelSeed,
        class IPreliminarySurfaceProvider const&,
        class Dimension const& dimension
    );

    // vIndex: 6, symbol:
    // ?createStructureStart@BuriedTreasureFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension& generator, class BiomeSource const& biomeSource, class Random& random, class ChunkPos const& lc, class IPreliminarySurfaceProvider const&);

    // symbol: ??0BuriedTreasureFeature@@QEAA@I@Z
    MCAPI explicit BuriedTreasureFeature(uint seed);

    // NOLINTEND
};
