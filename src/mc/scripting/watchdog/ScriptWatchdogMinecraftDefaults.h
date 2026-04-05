#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptWatchdogMinecraftDefaults {
public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static int const& mHangThresholdDefaultSeconds();

    MCNAPI static int const& mSlowThresholdDefaultMs();
    // NOLINTEND
};
