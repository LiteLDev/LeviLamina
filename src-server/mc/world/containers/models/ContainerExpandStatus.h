#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContainerExpandStatus : int {
    Normal     = 0,
    Expanded   = 1,
    Contracted = 2,
    Child      = 3,
    Count      = 4,
};
