#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSyncFlag : ushort {
    // bitfield representation
    Synced = 0,
    Local = 1 << 4,
};
