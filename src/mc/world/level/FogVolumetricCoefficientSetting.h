#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricCoefficientSetting {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGVOLUMETRICCOEFFICIENTSETTING
public:
    FogVolumetricCoefficientSetting& operator=(FogVolumetricCoefficientSetting const&) = delete;
    FogVolumetricCoefficientSetting(FogVolumetricCoefficientSetting const&)            = delete;
    FogVolumetricCoefficientSetting()                                                  = delete;
#endif

public:
    /**
     * @symbol ?ZERO_SETTING\@FogVolumetricCoefficientSetting\@\@2U1\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const ZERO_SETTING;
};
