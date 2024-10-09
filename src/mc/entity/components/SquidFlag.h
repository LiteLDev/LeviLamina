#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SquidFlag {
public:
    // prevent constructor by default
    SquidFlag& operator=(SquidFlag const&);
    SquidFlag(SquidFlag const&);
    SquidFlag();
};
