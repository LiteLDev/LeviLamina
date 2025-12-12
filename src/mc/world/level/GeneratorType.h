#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GeneratorType : int {
    Legacy    = 0,
    Overworld = 1,
    Flat      = 2,
    Nether    = 3,
    TheEnd    = 4,
    Void      = 5,
    Undefined = 6,
};
