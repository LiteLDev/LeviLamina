#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BakedResourceExtendedOffsets {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mExtendedResourceOffset;
    ::ll::TypedStorage<2, 2, ushort> mMaterialCount;
    ::ll::TypedStorage<1, 1, uchar>  mTextureCount;
    // NOLINTEND
};
