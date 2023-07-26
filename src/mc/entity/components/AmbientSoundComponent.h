#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundComponent {

public:
    // prevent constructor by default
    AmbientSoundComponent& operator=(AmbientSoundComponent const&) = delete;
    AmbientSoundComponent(AmbientSoundComponent const&)            = delete;
    AmbientSoundComponent()                                        = delete;

public:
    /**
     * @symbol ?setAmbientSoundRemainingTime\@AmbientSoundComponent\@\@SAXAEAVActor\@\@M\@Z
     */
    MCAPI static void setAmbientSoundRemainingTime(class Actor&, float); // NOLINT
};
