#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptWatchdogMinecraftDefaults {
public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static int const& mHangThresholdDefaultSeconds();

    MCNAPI static int const& mSlowThresholdDefaultMs();
#endif
    // NOLINTEND
};
