#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandUsageFlag : unsigned short {
    Normal = 0,
    Test   = 1 << 0,
};
