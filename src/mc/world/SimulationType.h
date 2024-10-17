#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SimulationType : uchar {
    Game    = 0x0,
    Editor  = 0x1,
    Test    = 0x2,
    Invalid = 0x3,
};
