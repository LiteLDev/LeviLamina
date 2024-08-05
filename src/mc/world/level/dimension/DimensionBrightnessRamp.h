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
    // vIndex: 0
    virtual ~DimensionBrightnessRamp() = default;

    // vIndex: 1
    virtual void buildBrightnessRamp();

    // vIndex: 2
    virtual float getBaseAmbientValue() const;

    MCAPI float getBrightnessRampValue(int index) const;

    // NOLINTEND
};
