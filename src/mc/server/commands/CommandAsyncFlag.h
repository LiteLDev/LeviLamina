#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandAsyncFlag : ushort {
    // bitfield representation
    Synch = 0,
    Async = 1 << 8,
};
