#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class PillagerOutpostStart : public ::StructureStart {
public:
    // prevent constructor by default
    PillagerOutpostStart& operator=(PillagerOutpostStart const&);
    PillagerOutpostStart(PillagerOutpostStart const&);
    PillagerOutpostStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PillagerOutpostStart@@UEAA@XZ
    virtual ~PillagerOutpostStart() = default;

    // vIndex: 1, symbol: ?postProcess@PillagerOutpostStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource& region, class Random& random, class BoundingBox const& chunkBB);

    // symbol: ??0PillagerOutpostStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
    MCAPI PillagerOutpostStart(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND
};
