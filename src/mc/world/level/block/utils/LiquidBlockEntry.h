#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LiquidBlockEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIQUIDBLOCKENTRY
public:
    LiquidBlockEntry& operator=(LiquidBlockEntry const&) = delete;
    LiquidBlockEntry(LiquidBlockEntry const&)            = delete;
    LiquidBlockEntry()                                   = delete;
#endif

public:
};
