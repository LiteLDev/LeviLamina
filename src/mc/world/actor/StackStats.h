#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StackStats {
public:
    // prevent constructor by default
    StackStats& operator=(StackStats const&);
    StackStats(StackStats const&);
    StackStats();
};
