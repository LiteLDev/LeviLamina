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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ?createRuin@OceanRuinStart@@QEAAXAEAVDimension@@AEAVRandom@@HH@Z
    MCAPI void createRuin(class Dimension&, class Random&, int, int);

    // NOLINTEND
};
