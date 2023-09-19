#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogDistanceSetting {
public:
    // prevent constructor by default
    FogDistanceSetting& operator=(FogDistanceSetting const&);
    FogDistanceSetting(FogDistanceSetting const&);
    FogDistanceSetting();

public:
    // NOLINTBEGIN
    // symbol: ?ZERO_SETTING@FogDistanceSetting@@2U1@B
    MCAPI static struct FogDistanceSetting const ZERO_SETTING;

    // NOLINTEND
};
