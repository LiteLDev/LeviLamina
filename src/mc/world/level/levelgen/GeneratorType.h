#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GeneratorType : int {
    Legacy    = 0x0,
    Overworld = 0x1,
    Flat      = 0x2,
    Nether    = 0x3,
    TheEnd    = 0x4,
    Void      = 0x5,
    Undefined = 0x6,
};
