#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevitateTravelFlag {
public:
    // prevent constructor by default
    LevitateTravelFlag& operator=(LevitateTravelFlag const&);
    LevitateTravelFlag(LevitateTravelFlag const&);
    LevitateTravelFlag();
};
