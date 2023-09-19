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
    // symbol: ??4AmbientSoundServerComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class AmbientSoundServerComponent& operator=(class AmbientSoundServerComponent&&);

    // symbol: ??1AmbientSoundServerComponent@@QEAA@XZ
    MCAPI ~AmbientSoundServerComponent();

    // NOLINTEND
};
