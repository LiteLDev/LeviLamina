#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecartFlag {
public:
    // prevent constructor by default
    MinecartFlag& operator=(MinecartFlag const&);
    MinecartFlag(MinecartFlag const&);
    MinecartFlag();
};
