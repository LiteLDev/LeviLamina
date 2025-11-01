#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ProfanityFilterContext : uint {
    None = 0,
    UIFrontEnd = 1,
    UIInGame = 2,
    AllUI = 3,
    InGameChat = 4,
    InGameItems = 8,
    InGameName = 16,
    All = 31,
};
