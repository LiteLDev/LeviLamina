#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandBlockMode : int16_t {
    Repeating = 0x1,
    Chain     = 0x2,
};
