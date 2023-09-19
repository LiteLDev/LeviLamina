#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PrimedTntFlag {
public:
    // prevent constructor by default
    PrimedTntFlag& operator=(PrimedTntFlag const&);
    PrimedTntFlag(PrimedTntFlag const&);
    PrimedTntFlag();
};
