#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancePackedBools {
public:
    // member variables
    // NOLINTBEGIN
    bool mFaceDimming               : 1;
    bool mRandomizeUVRotation       : 1;
    bool mSupportsTextureVariations : 1;
    // NOLINTEND
};
