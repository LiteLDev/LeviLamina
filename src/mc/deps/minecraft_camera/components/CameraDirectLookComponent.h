#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraDirectLookComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mYaw;
    ::ll::TypedStorage<4, 4, float> mPitch;
    ::ll::TypedStorage<4, 4, float> mYawDelta;
    ::ll::TypedStorage<4, 4, float> mPitchMin;
    ::ll::TypedStorage<4, 4, float> mPitchMax;
    // NOLINTEND
};
