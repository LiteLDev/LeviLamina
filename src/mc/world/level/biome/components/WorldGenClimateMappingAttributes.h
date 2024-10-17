#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WorldGenClimateMappingAttributes {
public:
    // prevent constructor by default
    WorldGenClimateMappingAttributes& operator=(WorldGenClimateMappingAttributes const&);
    WorldGenClimateMappingAttributes(WorldGenClimateMappingAttributes const&);
    WorldGenClimateMappingAttributes();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WorldGenClimateMappingAttributes() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
