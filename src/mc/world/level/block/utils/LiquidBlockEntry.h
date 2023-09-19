#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LiquidBlockEntry {
public:
    // prevent constructor by default
    LiquidBlockEntry& operator=(LiquidBlockEntry const&);
    LiquidBlockEntry(LiquidBlockEntry const&);
    LiquidBlockEntry();
};
