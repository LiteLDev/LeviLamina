#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RealmsEnvironment : int {
    Production       = 0,
    Staging          = 1,
    Dev              = 2,
    Local            = 3,
    EnvironmentCount = 4,
};
