#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraShakeComponent {

public:
    // prevent constructor by default
    CameraShakeComponent& operator=(CameraShakeComponent const&) = delete;
    CameraShakeComponent(CameraShakeComponent const&)            = delete;
    CameraShakeComponent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getMaxIntensity\@CameraShakeComponent\@\@SAMXZ
     */
    MCAPI static float getMaxIntensity();
    // NOLINTEND
};
