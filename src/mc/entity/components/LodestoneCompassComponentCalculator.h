#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LodestoneCompassComponentCalculator {
public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&);
    LodestoneCompassComponentCalculator();

    // private:
    // NOLINTBEGIN
    MCAPI static float COOLDOWN_TIME_SECONDS;

    // NOLINTEND
};
