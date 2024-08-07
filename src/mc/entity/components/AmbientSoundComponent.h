#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundComponent {
public:
    // prevent constructor by default
    AmbientSoundComponent& operator=(AmbientSoundComponent const&);
    AmbientSoundComponent(AmbientSoundComponent const&);
    AmbientSoundComponent();

public:
    // NOLINTBEGIN
    MCAPI static void setAmbientSoundRemainingTime(class Actor& owner, float seconds);

    // NOLINTEND
};
