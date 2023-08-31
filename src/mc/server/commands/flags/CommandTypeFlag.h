#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandTypeFlag : uint16_t {
    None    = 0,
    Message = 1 << 6,
};
