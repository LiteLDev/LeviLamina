#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class MineshaftStart : public ::StructureStart {
public:
    // prevent constructor by default
    MineshaftStart& operator=(MineshaftStart const&);
    MineshaftStart(MineshaftStart const&);
    MineshaftStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MineshaftStart() = default;

    // symbol:
    // ??0MineshaftStart@@QEAA@AEBVDimension@@AEBVBiomeSource@@AEAVRandom@@AEBVChunkPos@@AEBVIPreliminarySurfaceProvider@@@Z
    MCAPI
    MineshaftStart(class Dimension const&, class BiomeSource const&, class Random&, class ChunkPos const&, class IPreliminarySurfaceProvider const&);

    // NOLINTEND
};
