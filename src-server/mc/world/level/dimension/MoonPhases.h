#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class MoonPhases : int {
    FullMoon = 0,
    WaningGibbous = 1,
    FirstQuarter = 2,
    WaningCrescent = 3,
    NewMoon = 4,
    WaxingCrescent = 5,
    LastQuarter = 6,
    WaxingGibbous = 7,
    Count = 8,
};
