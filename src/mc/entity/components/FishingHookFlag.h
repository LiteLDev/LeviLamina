#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FishingHookFlag {
public:
    // prevent constructor by default
    FishingHookFlag& operator=(FishingHookFlag const&);
    FishingHookFlag(FishingHookFlag const&);
    FishingHookFlag();
};
