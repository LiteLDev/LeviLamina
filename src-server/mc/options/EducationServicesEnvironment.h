#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EducationServicesEnvironment : int {
    Development   = 0,
    Staging       = 1,
    Production    = 2,
    Local         = 3,
    PreProduction = 4,
    Count         = 5,
};
