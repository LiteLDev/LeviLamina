#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    // prevent constructor by default
    DimensionBrightnessRamp& operator=(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp(DimensionBrightnessRamp const&);
    DimensionBrightnessRamp();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?buildBrightnessRamp@DimensionBrightnessRamp@@UEAAXXZ
    virtual void buildBrightnessRamp();

    // vIndex: 2, symbol: ?getBaseAmbientValue@DimensionBrightnessRamp@@UEBAMXZ
    virtual float getBaseAmbientValue() const;

    // symbol: ?getBrightnessRampValue@DimensionBrightnessRamp@@QEBAMH@Z
    MCAPI float getBrightnessRampValue(int) const;

    // NOLINTEND
};
