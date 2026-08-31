#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrameAllocationCount {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mActorCount;
    ::ll::TypedStorage<4, 4, uint> mTotalRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mUniqueRenderControllerCount;
    ::ll::TypedStorage<4, 4, uint> mMaximumDrawCount;
    ::ll::TypedStorage<4, 4, uint> mPartVisibilityCount;
    ::ll::TypedStorage<4, 4, uint> mTotalMaterials;
    ::ll::TypedStorage<4, 4, uint> mTotalTextures;
    ::ll::TypedStorage<4, 4, uint> mResourceExpressionCount;
    ::ll::TypedStorage<4, 4, uint> mOverlayColorCount;
    ::ll::TypedStorage<4, 4, uint> mChangeColorCount;
    ::ll::TypedStorage<4, 4, uint> mMultiplicitiveTintColorCount;
    ::ll::TypedStorage<4, 4, uint> mUvAnimCount;
    // NOLINTEND
};
