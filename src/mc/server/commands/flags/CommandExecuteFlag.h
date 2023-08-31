#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandExecuteFlag : uint16_t {
    Allowed    = 0,
    Disallowed = 1 << 5,
};
