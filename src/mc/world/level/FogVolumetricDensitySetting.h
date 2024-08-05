#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricDensitySetting {
public:
    // prevent constructor by default
    FogVolumetricDensitySetting& operator=(FogVolumetricDensitySetting const&);
    FogVolumetricDensitySetting(FogVolumetricDensitySetting const&);
    FogVolumetricDensitySetting();

public:
    // NOLINTBEGIN
    MCAPI static float const UNIFORM_MAX_DENSITY_HEIGHT;

    MCAPI static float const UNIFORM_ZERO_DENSITY_HEIGHT;

    MCAPI static struct FogVolumetricDensitySetting const ZERO_SETTING;

    // NOLINTEND
};
