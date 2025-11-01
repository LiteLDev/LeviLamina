#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandBlockMode : ushort {
    Normal    = 0,
    Repeating = 1,
    Chain     = 2,
};
