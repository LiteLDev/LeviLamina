#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandTypeFlag : unsigned short {
    None    = 0,
    Message = 1 << 6,
};
