#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AMBIENTSOUNDCOMPONENT
public:
    AmbientSoundComponent& operator=(AmbientSoundComponent const&) = delete;
    AmbientSoundComponent(AmbientSoundComponent const&)            = delete;
    AmbientSoundComponent()                                        = delete;
#endif

public:
    /**
     * @symbol ?setAmbientSoundRemainingTime\@AmbientSoundComponent\@\@SAXAEAVActor\@\@M\@Z
     */
    MCAPI static void setAmbientSoundRemainingTime(class Actor&, float);
};
