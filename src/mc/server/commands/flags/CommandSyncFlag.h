#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSyncFlag : uint16_t {
    Synced = 0,
    Local  = 1 << 4,
};
