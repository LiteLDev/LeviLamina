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
    MCAPI ~StructureSpawnOverride();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace br::worldgen
