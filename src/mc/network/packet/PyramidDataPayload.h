#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PyramidDataPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mWidth;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mDepth;
    ::ll::TypedStorage<4, 4, float>                  mHeight;
    // NOLINTEND
};
