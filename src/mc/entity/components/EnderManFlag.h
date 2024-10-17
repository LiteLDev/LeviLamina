#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EnderManFlag {
public:
    // prevent constructor by default
    EnderManFlag& operator=(EnderManFlag const&);
    EnderManFlag(EnderManFlag const&);
    EnderManFlag();
};
