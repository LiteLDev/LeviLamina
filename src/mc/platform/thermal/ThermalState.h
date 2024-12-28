#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ThermalState : int {
    Unknown  = 0,
    Normal   = 1,
    Moderate = 2,
    Serious  = 3,
    Critical = 4,
    Count    = 5,
};
