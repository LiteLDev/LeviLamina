#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorseFlag {

public:
    // prevent constructor by default
    HorseFlag& operator=(HorseFlag const&) = delete;
    HorseFlag(HorseFlag const&)            = delete;
    HorseFlag()                            = delete;
};
