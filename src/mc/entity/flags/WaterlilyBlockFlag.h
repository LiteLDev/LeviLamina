#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterlilyBlockFlag {
public:
    // prevent constructor by default
    WaterlilyBlockFlag& operator=(WaterlilyBlockFlag const&);
    WaterlilyBlockFlag(WaterlilyBlockFlag const&);
    WaterlilyBlockFlag();
};
