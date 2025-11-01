#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancePackedBools {
public:
    // member variables
    // NOLINTBEGIN
    bool mFaceDimming : 1;
    bool mRandomizeUVRotation : 1;
    bool mSupportsTextureVariations : 1;
    bool mAlphaMaskedTint : 1;
    bool mEmissive : 1;
    // NOLINTEND

};
