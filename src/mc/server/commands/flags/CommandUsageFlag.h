#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandUsageFlag : uint16_t {
    Normal = 0,
    Test   = 1 << 0,
};
