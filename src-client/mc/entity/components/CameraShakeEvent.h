#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraShakeEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mIntensity;
    ::ll::TypedStorage<4, 4, float> mDuration;
    // NOLINTEND
};
