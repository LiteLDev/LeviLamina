#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LodestoneCompassComponentCalculator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LODESTONECOMPASSCOMPONENTCALCULATOR
public:
    LodestoneCompassComponentCalculator& operator=(LodestoneCompassComponentCalculator const&) = delete;
    LodestoneCompassComponentCalculator(LodestoneCompassComponentCalculator const&)            = delete;
    LodestoneCompassComponentCalculator()                                                      = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?COOLDOWN_TIME_SECONDS\@LodestoneCompassComponentCalculator\@\@0MA
     */
    MCAPI static float COOLDOWN_TIME_SECONDS;
};
