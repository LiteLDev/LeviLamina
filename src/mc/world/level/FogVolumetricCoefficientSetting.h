#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogVolumetricCoefficientSetting {
public:
    // prevent constructor by default
    FogVolumetricCoefficientSetting& operator=(FogVolumetricCoefficientSetting const&);
    FogVolumetricCoefficientSetting(FogVolumetricCoefficientSetting const&);
    FogVolumetricCoefficientSetting();

public:
    // NOLINTBEGIN
    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct FogVolumetricCoefficientSetting const& ZERO_SETTING();

    // NOLINTEND
};
