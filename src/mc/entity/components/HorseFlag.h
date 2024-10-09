#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseFlag {
public:
    // prevent constructor by default
    HorseFlag& operator=(HorseFlag const&);
    HorseFlag(HorseFlag const&);
    HorseFlag();
};
