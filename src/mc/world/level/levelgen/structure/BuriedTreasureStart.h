#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class BuriedTreasureStart : public ::StructureStart {
public:
    // prevent constructor by default
    BuriedTreasureStart& operator=(BuriedTreasureStart const&);
    BuriedTreasureStart(BuriedTreasureStart const&);
    BuriedTreasureStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BuriedTreasureStart@@UEAA@XZ
    virtual ~BuriedTreasureStart() = default;

    // symbol: ??0BuriedTreasureStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
    MCAPI BuriedTreasureStart(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND
};
