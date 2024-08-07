#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraShakeComponent {
public:
    // prevent constructor by default
    CameraShakeComponent& operator=(CameraShakeComponent const&);
    CameraShakeComponent(CameraShakeComponent const&);
    CameraShakeComponent();

public:
    // NOLINTBEGIN
    MCAPI static float getMaxIntensity();

    // NOLINTEND
};
