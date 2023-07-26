/**
 * @file  CameraShakeComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CameraShakeComponent.
 *
 */
class CameraShakeComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAMERASHAKECOMPONENT
public:
    class CameraShakeComponent& operator=(class CameraShakeComponent const &) = delete;
    CameraShakeComponent(class CameraShakeComponent const &) = delete;
    CameraShakeComponent() = delete;
#endif

public:
    /**
     * @symbol  ?getMaxIntensity\@CameraShakeComponent\@\@SAMXZ
     */
    MCAPI static float getMaxIntensity();

};