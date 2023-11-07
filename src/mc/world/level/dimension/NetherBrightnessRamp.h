#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionBrightnessRamp.h"

class NetherBrightnessRamp : public ::DimensionBrightnessRamp {
public:
    // prevent constructor by default
    NetherBrightnessRamp& operator=(NetherBrightnessRamp const&);
    NetherBrightnessRamp(NetherBrightnessRamp const&);
    NetherBrightnessRamp() = default;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NetherBrightnessRamp() = default;

    // vIndex: 2, symbol: ?getBaseAmbientValue@NetherBrightnessRamp@@UEBAMXZ
    virtual float getBaseAmbientValue() const;

    // NOLINTEND
};
