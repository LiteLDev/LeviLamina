#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BakedRenderControllerMetaData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   mResourceExpressionCount;
    ::ll::TypedStorage<2, 2, ushort> mMaximumDrawCount;
    // NOLINTEND
};
