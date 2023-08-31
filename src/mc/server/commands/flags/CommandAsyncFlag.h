#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandAsyncFlag : uint16_t {
    Synch = 0,
    Async = 1 << 8,
};
