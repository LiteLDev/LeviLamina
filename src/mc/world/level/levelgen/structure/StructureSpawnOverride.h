#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct StructureSpawnOverride {
public:
    // prevent constructor by default
    StructureSpawnOverride& operator=(StructureSpawnOverride const&);
    StructureSpawnOverride(StructureSpawnOverride const&);
    StructureSpawnOverride();

public:
    // NOLINTBEGIN
    // symbol: ??1StructureSpawnOverride@worldgen@br@@QEAA@XZ
    MCAPI ~StructureSpawnOverride();

    // NOLINTEND
};

}; // namespace br::worldgen
