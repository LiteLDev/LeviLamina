#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParrotFlag {
public:
    // prevent constructor by default
    ParrotFlag& operator=(ParrotFlag const&);
    ParrotFlag(ParrotFlag const&);
    ParrotFlag();
};
