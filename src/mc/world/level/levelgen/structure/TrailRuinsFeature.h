#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class TrailRuinsFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    TrailRuinsFeature& operator=(TrailRuinsFeature const&);
    TrailRuinsFeature(TrailRuinsFeature const&);
    TrailRuinsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TrailRuinsFeature@@UEAA@XZ
    virtual ~TrailRuinsFeature() = default;

    // vIndex: 5, symbol:
    // ?isFeatureChunk@TrailRuinsFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6, symbol:
    // ?createStructureStart@TrailRuinsFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ??0TrailRuinsFeature@@QEAA@IAEBVBaseGameVersion@@@Z
    MCAPI TrailRuinsFeature(uint, class BaseGameVersion const&);

    // NOLINTEND
};
