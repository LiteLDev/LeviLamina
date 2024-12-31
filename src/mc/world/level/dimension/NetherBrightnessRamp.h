#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class NetherBrightnessRamp : public ::DimensionBrightnessRamp {
public:
    // prevent constructor by default
    NetherBrightnessRamp& operator=(NetherBrightnessRamp const&);
    NetherBrightnessRamp(NetherBrightnessRamp const&);
    NetherBrightnessRamp();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual float getBaseAmbientValue() const /*override*/;

    // vIndex: 0
    virtual ~NetherBrightnessRamp() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getBaseAmbientValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
