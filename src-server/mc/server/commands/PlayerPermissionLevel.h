#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerPermissionLevel : schar {
    Visitor = 0,
    Member = 1,
    Operator = 2,
    Custom = 3,
};
