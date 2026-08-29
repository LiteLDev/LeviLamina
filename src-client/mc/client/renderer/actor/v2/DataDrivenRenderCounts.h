#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DataDrivenRenderCounts {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mMaterialCount;
    ::ll::TypedStorage<4, 4, uint> mTextureCount;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
