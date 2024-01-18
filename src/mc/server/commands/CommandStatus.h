#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandStatus : int {
    Invalid = 0x0,
    Local   = 0x1,
    Remote  = 0x2,
};
