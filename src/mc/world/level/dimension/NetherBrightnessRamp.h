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
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherBrightnessRamp() = default;

    // vIndex: 2
    virtual float getBaseAmbientValue() const;

    // NOLINTEND
};
