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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PillagerOutpostStart() = default;

    // vIndex: 1, symbol: ?postProcess@PillagerOutpostStart@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);

    // symbol: ??0PillagerOutpostStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
    MCAPI PillagerOutpostStart(class Dimension&, class Random&, int, int);

    // NOLINTEND
};
