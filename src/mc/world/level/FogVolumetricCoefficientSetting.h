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
    // symbol: ?ZERO_SETTING@FogVolumetricCoefficientSetting@@2U1@B
    MCAPI static struct FogVolumetricCoefficientSetting const ZERO_SETTING;

    // NOLINTEND
};
