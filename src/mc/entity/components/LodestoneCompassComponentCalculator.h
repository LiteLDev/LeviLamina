#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LodestoneCompassComponentCalculator {

public:
    // prevent constructor by default
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&) = delete;
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&)            = delete;
    LodestoneCompassComponentCalculator()                                                      = delete;

    // private:

private:
    /**
     * @symbol ?COOLDOWN_TIME_SECONDS\@LodestoneCompassComponentCalculator\@\@0MA
     */
    MCAPI static float COOLDOWN_TIME_SECONDS; // NOLINT
};
