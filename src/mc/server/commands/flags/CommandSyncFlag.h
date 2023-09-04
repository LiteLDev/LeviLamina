#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSyncFlag : ushort {
    Synced = 0,
    Local  = 1 << 4,
};
