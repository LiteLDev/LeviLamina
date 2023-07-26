#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TropicalFishFlag {

public:
    // prevent constructor by default
    TropicalFishFlag& operator=(TropicalFishFlag const&) = delete;
    TropicalFishFlag(TropicalFishFlag const&)            = delete;
    TropicalFishFlag()                                   = delete;
};
