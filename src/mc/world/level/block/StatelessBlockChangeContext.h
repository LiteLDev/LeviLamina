#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StatelessBlockChangeContext : uchar {
    Scripts            = 0,
    ScriptsPermutation = 1,
    Commands           = 2,
    Structure          = 3,
    MultiBlock         = 4,
    Count              = 5,
};
