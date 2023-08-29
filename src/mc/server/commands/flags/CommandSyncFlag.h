#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSyncFlag : unsigned short {
    Synced = 0,
    Local  = 1 << 4,
};
