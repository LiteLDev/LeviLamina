#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CameraShakeSupportComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mFrequency;
    ::ll::TypedStorage<4, 4, float> mAmplitude;
    ::ll::TypedStorage<4, 4, float> mNoiseMultiplier;
    // NOLINTEND
};
