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
    // vIndex: 0
    virtual ~DimensionBrightnessRamp() = default;

    // vIndex: 1
    virtual void buildBrightnessRamp();

    // vIndex: 2
    virtual float getBaseAmbientValue() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getBrightnessRampValue(int index) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
