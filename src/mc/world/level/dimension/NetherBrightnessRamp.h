#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class NetherBrightnessRamp : public ::DimensionBrightnessRamp {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getBaseAmbientValue() const /*override*/;

    virtual ~NetherBrightnessRamp() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getBaseAmbientValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
