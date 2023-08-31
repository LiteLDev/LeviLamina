#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerPermissionLevel : int8_t {
    Visitor  = 0x0,
    Member   = 0x1,
    Operator = 0x2,
    Custom   = 0x3,
};
