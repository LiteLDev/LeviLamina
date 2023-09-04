#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandExecuteFlag : ushort {
    Allowed    = 0,
    Disallowed = 1 << 5,
};
