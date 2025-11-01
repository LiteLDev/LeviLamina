#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandPermissionLevel : uchar {
    Any = 0,
    GameDirectors = 1,
    Admin = 2,
    Host = 3,
    Owner = 4,
    Internal = 5,
};
