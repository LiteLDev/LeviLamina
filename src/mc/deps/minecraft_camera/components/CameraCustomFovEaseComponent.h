#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraCustomFovEaseComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mClearCustomFov;
    ::ll::TypedStorage<4, 4, float>                                        mPreviousCustomFov;
    ::ll::TypedStorage<4, 4, float>                                        mPercentage;
    ::ll::TypedStorage<4, 4, float>                                        mBlendTime;
    ::ll::TypedStorage<8, 64, ::std::function<float(float, float, float)>> mEaseFunction;
    // NOLINTEND
};
