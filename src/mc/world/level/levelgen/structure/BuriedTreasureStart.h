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
    // vIndex: 0
    virtual ~BuriedTreasureStart() = default;

    MCAPI BuriedTreasureStart(class Dimension&, class Random&, int x, int z);

    // NOLINTEND
};
