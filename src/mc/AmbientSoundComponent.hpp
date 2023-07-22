/**
 * @file  AmbientSoundComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AmbientSoundComponent.
 *
 */
class AmbientSoundComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDCOMPONENT
public:
    class AmbientSoundComponent& operator=(class AmbientSoundComponent const &) = delete;
    AmbientSoundComponent(class AmbientSoundComponent const &) = delete;
    AmbientSoundComponent() = delete;
#endif

public:
    /**
     * @symbol  ?setAmbientSoundRemainingTime\@AmbientSoundComponent\@\@SAXAEAVActor\@\@M\@Z
     */
    MCAPI static void setAmbientSoundRemainingTime(class Actor &, float);

};