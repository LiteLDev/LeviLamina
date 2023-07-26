#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterlilyBlockFlag {

public:
    // prevent constructor by default
    WaterlilyBlockFlag& operator=(WaterlilyBlockFlag const&) = delete;
    WaterlilyBlockFlag(WaterlilyBlockFlag const&)            = delete;
    WaterlilyBlockFlag()                                     = delete;
};
