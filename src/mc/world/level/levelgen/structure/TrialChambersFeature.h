#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureFeature.h"

class TrialChambersFeature : public ::StructureFeature {
public:
    // prevent constructor by default
    TrialChambersFeature& operator=(TrialChambersFeature const&);
    TrialChambersFeature(TrialChambersFeature const&);
    TrialChambersFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TrialChambersFeature@@UEAA@XZ
    virtual ~TrialChambersFeature() = default;

    // vIndex: 5, symbol:
    // ?isFeatureChunk@TrialChambersFeature@@UEAA_NAEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@IAEBVIPreliminarySurfaceProvider@@AEBVDimension@@@Z
    virtual bool
    isFeatureChunk(class BiomeSource const&, class Random&, class ChunkPos const&, uint, class IPreliminarySurfaceProvider const&, class Dimension const&);

    // vIndex: 6, symbol:
    // ?createStructureStart@TrialChambersFeature@@MEAA?AV?$unique_ptr@VStructureStart@@U?$default_delete@VStructureStart@@@std@@@std@@AEAVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    virtual std::unique_ptr<class StructureStart>
    createStructureStart(class Dimension&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // symbol: ??0TrialChambersFeature@@QEAA@IAEBVBaseGameVersion@@@Z
    MCAPI TrialChambersFeature(uint, class BaseGameVersion const&);

    // NOLINTEND
};
