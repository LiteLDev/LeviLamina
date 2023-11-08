#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    float mBrightnessRamp[16] = {0};
    // prevent constructor by default
    DimensionBrightnessRamp& operator=(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp() = default;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DimensionBrightnessRamp@@UEAA@XZ
    virtual ~DimensionBrightnessRamp() = default;

    // vIndex: 1, symbol: ?buildBrightnessRamp@DimensionBrightnessRamp@@UEAAXXZ
    virtual void buildBrightnessRamp();

    // vIndex: 2, symbol: ?getBaseAmbientValue@DimensionBrightnessRamp@@UEBAMXZ
    virtual float getBaseAmbientValue() const;

    // symbol: ?getBrightnessRampValue@DimensionBrightnessRamp@@QEBAMH@Z
    MCAPI float getBrightnessRampValue(int) const;

    // NOLINTEND
};
