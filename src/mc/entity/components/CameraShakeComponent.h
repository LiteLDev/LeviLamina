#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CameraShakeComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKECOMPONENT
public:
    CameraShakeComponent& operator=(CameraShakeComponent const&) = delete;
    CameraShakeComponent(CameraShakeComponent const&)            = delete;
    CameraShakeComponent()                                       = delete;
#endif

public:
    /**
     * @symbol ?getMaxIntensity\@CameraShakeComponent\@\@SAMXZ
     */
    MCAPI static float getMaxIntensity();
};
