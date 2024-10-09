#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WaterAnimalFlag {
public:
    // prevent constructor by default
    WaterAnimalFlag& operator=(WaterAnimalFlag const&);
    WaterAnimalFlag(WaterAnimalFlag const&);
    WaterAnimalFlag();
};
