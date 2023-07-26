#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FishFlag {

public:
    // prevent constructor by default
    FishFlag& operator=(FishFlag const&) = delete;
    FishFlag(FishFlag const&)            = delete;
    FishFlag()                           = delete;
};
