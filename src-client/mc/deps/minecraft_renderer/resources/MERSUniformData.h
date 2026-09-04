#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MERSUniformData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMetalness;
    ::ll::TypedStorage<4, 4, float> mEmissive;
    ::ll::TypedStorage<4, 4, float> mRoughness;
    ::ll::TypedStorage<4, 4, float> mSubsurface;
    // NOLINTEND
};
