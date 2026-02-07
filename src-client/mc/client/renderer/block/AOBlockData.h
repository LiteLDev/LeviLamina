#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BrightnessPair.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct AOBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Block const*>   mBlock;
    ::ll::TypedStorage<1, 2, ::BrightnessPair> mLightColor;
    ::ll::TypedStorage<4, 4, float>            mBrightness;
    ::ll::TypedStorage<1, 1, bool>             mIsOpaqueFullBlock;
    ::ll::TypedStorage<1, 1, bool>             mIsFilled;
    // NOLINTEND
};
