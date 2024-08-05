#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    float mBrightnessRamp[16] = {0};

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
