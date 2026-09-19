#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BiomeMesaSurfaceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mClayMaterial;
    ::ll::TypedStorage<4, 4, uint> mHardClayMaterial;
    ::ll::TypedStorage<1, 1, bool> mBrycePillars;
    ::ll::TypedStorage<1, 1, bool> mHasForest;
    // NOLINTEND
};
