#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatFlag {
public:
    // prevent constructor by default
    BoatFlag& operator=(BoatFlag const&);
    BoatFlag(BoatFlag const&);
    BoatFlag();
};
