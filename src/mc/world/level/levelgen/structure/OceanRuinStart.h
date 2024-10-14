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
    // vIndex: 0
    virtual ~OceanRuinStart() = default;

    MCAPI void createRuin(class Dimension& dim, class Random& random, int x, int z);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
