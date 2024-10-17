#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandTypeFlag : ushort {
    None    = 0,
    Message = 1 << 6,
};
