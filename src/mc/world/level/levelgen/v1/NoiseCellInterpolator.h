#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NoiseCellInterpolator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::span<float const>> mInputValues;
    ::ll::TypedStorage<4, 4, float>                     mNoise000;
    ::ll::TypedStorage<4, 4, float>                     mNoise100;
    ::ll::TypedStorage<4, 4, float>                     mNoise001;
    ::ll::TypedStorage<4, 4, float>                     mNoise101;
    ::ll::TypedStorage<4, 4, float>                     mNoise010;
    ::ll::TypedStorage<4, 4, float>                     mNoise110;
    ::ll::TypedStorage<4, 4, float>                     mNoise011;
    ::ll::TypedStorage<4, 4, float>                     mNoise111;
    ::ll::TypedStorage<4, 4, float>                     mValueXY00;
    ::ll::TypedStorage<4, 4, float>                     mValueXY10;
    ::ll::TypedStorage<4, 4, float>                     mValueXY01;
    ::ll::TypedStorage<4, 4, float>                     mValueXY11;
    ::ll::TypedStorage<4, 4, float>                     mValueY0;
    ::ll::TypedStorage<4, 4, float>                     mValueY1;
    ::ll::TypedStorage<4, 4, float>                     mLerpedValue;
    ::ll::TypedStorage<4, 4, float>                     mXZDeltaSize;
    ::ll::TypedStorage<4, 4, float>                     mYDeltaSize;
    // NOLINTEND
};
