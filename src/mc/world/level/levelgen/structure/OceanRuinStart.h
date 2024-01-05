#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class OceanRuinStart : public ::StructureStart {
public:
    // prevent constructor by default
    OceanRuinStart& operator=(OceanRuinStart const&);
    OceanRuinStart(OceanRuinStart const&);
    OceanRuinStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1OceanRuinStart@@UEAA@XZ
    virtual ~OceanRuinStart() = default;

    // symbol: ?createRuin@OceanRuinStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void createRuin(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND
};
