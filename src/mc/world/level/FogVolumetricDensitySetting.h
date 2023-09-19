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
    // symbol: ?UNIFORM_MAX_DENSITY_HEIGHT@FogVolumetricDensitySetting@@2MB
    MCAPI static float const UNIFORM_MAX_DENSITY_HEIGHT;

    // symbol: ?UNIFORM_ZERO_DENSITY_HEIGHT@FogVolumetricDensitySetting@@2MB
    MCAPI static float const UNIFORM_ZERO_DENSITY_HEIGHT;

    // symbol: ?ZERO_SETTING@FogVolumetricDensitySetting@@2U1@B
    MCAPI static struct FogVolumetricDensitySetting const ZERO_SETTING;

    // NOLINTEND
};
