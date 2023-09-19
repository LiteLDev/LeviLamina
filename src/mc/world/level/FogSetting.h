#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogSetting {
public:
    // prevent constructor by default
    FogSetting& operator=(FogSetting const&);
    FogSetting(FogSetting const&);
    FogSetting();

public:
    // NOLINTBEGIN
    // symbol: ?ZERO_SETTING@FogSetting@@2U1@B
    MCAPI static struct FogSetting const ZERO_SETTING;

    // NOLINTEND
};
