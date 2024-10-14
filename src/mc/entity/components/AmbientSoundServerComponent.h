#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AmbientSoundServerComponent {
public:
    // prevent constructor by default
    AmbientSoundServerComponent& operator=(AmbientSoundServerComponent const&);
    AmbientSoundServerComponent(AmbientSoundServerComponent const&);
    AmbientSoundServerComponent();

public:
    // NOLINTBEGIN
    MCAPI class AmbientSoundServerComponent& operator=(class AmbientSoundServerComponent&&);

    MCAPI ~AmbientSoundServerComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
