#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandAsyncFlag : ushort {
    Synch = 0,
    Async = 1 << 8,
};
