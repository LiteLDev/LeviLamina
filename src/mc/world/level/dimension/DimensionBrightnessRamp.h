#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionBrightnessRamp {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 64, float[16]> mBrightnessRamp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DimensionBrightnessRamp() = default;

    virtual void buildBrightnessRamp();

    virtual float getBaseAmbientValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getBrightnessRampValue(int index) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $buildBrightnessRamp();

    MCFOLD float $getBaseAmbientValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
