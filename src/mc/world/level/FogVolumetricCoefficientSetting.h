#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricCoefficientSetting {

public:
    // prevent constructor by default
    FogVolumetricCoefficientSetting& operator=(FogVolumetricCoefficientSetting const&) = delete;
    FogVolumetricCoefficientSetting(FogVolumetricCoefficientSetting const&)            = delete;
    FogVolumetricCoefficientSetting()                                                  = delete;

public:
    /**
     * @symbol ?ZERO_SETTING\@FogVolumetricCoefficientSetting\@\@2U1\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const ZERO_SETTING; // NOLINT
};
