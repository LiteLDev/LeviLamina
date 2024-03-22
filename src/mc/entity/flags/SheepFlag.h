#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SheepFlag {
public:
    // prevent constructor by default
    SheepFlag& operator=(SheepFlag const&);
    SheepFlag(SheepFlag const&);
    SheepFlag();
};
