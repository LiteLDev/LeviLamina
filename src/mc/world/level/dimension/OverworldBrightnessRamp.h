#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class OverworldBrightnessRamp : public ::DimensionBrightnessRamp {
public:
    // prevent constructor by default
    OverworldBrightnessRamp& operator=(OverworldBrightnessRamp const&);
    OverworldBrightnessRamp(OverworldBrightnessRamp const&);
    OverworldBrightnessRamp();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OverworldBrightnessRamp() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
