#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PrimedTntFlag {

public:
    // prevent constructor by default
    PrimedTntFlag& operator=(PrimedTntFlag const&) = delete;
    PrimedTntFlag(PrimedTntFlag const&)            = delete;
    PrimedTntFlag()                                = delete;
};
