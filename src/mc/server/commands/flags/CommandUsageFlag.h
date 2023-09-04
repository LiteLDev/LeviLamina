#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandUsageFlag : ushort {
    Normal = 0,
    Test   = 1 << 0,
};
