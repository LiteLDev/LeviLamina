#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class IGPSTurningMode : int {
    Standard          = 0,
    Stutter           = 1,
    Direct            = 2,
    Roll              = 4,
    StutterDirect     = 3,
    StutterRoll       = 5,
    DirectRoll        = 6,
    StutterDirectRoll = 7,
};
