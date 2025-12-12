#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptWatchdogMinecraftDefaults {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static int const& mHangThresholdDefaultSeconds();

    MCNAPI_C static int const& mSlowThresholdDefaultMs();
    // NOLINTEND
};
