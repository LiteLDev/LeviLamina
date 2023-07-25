#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricDensitySetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGVOLUMETRICDENSITYSETTING
public:
    FogVolumetricDensitySetting& operator=(FogVolumetricDensitySetting const&) = delete;
    FogVolumetricDensitySetting(FogVolumetricDensitySetting const&)            = delete;
    FogVolumetricDensitySetting()                                              = delete;
#endif

public:
    /**
     * @symbol ?UNIFORM_MAX_DENSITY_HEIGHT\@FogVolumetricDensitySetting\@\@2MB
     */
    MCAPI static float const UNIFORM_MAX_DENSITY_HEIGHT;
    /**
     * @symbol ?UNIFORM_ZERO_DENSITY_HEIGHT\@FogVolumetricDensitySetting\@\@2MB
     */
    MCAPI static float const UNIFORM_ZERO_DENSITY_HEIGHT;
    /**
     * @symbol ?ZERO_SETTING\@FogVolumetricDensitySetting\@\@2U1\@B
     */
    MCAPI static struct FogVolumetricDensitySetting const ZERO_SETTING;
};
