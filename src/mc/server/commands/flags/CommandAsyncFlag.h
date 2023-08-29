#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandAsyncFlag : unsigned short {
    Synch = 0,
    Async = 1 << 8,
};
