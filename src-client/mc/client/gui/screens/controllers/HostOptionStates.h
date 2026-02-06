#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HostOptionStates : int {
    None          = 0,
    Main          = 1,
    WorldSpawn    = 2,
    TeleportMain  = 3,
    TeleportWho   = 4,
    TeleportWhere = 5,
    Time          = 6,
    Weather       = 7,
    CodeBuilder   = 8,
    TotalOptions  = 9,
};
