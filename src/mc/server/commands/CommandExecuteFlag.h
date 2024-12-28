#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandExecuteFlag : ushort {
    // bitfield representation
    Allowed    = 0,
    Disallowed = 1 << 5,
};
