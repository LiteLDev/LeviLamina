#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancePackedBools {
public:
    // member variables
    // NOLINTBEGIN
    bool mFaceDimming               : 1;
    bool mRandomizeUVRotation       : 1;
    bool mSupportsTextureVariations : 1;
    bool mAlphaMaskedTint           : 1;
    bool mDithering                 : 1;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BlockMaterialInstancePackedBools(BlockMaterialInstancePackedBools const&);
    BlockMaterialInstancePackedBools();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::BlockMaterialInstancePackedBools& operator=(::BlockMaterialInstancePackedBools const& rhs);
#endif
    // NOLINTEND
};
