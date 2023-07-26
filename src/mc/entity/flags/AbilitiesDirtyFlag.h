#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesDirtyFlag {

public:
    // prevent constructor by default
    AbilitiesDirtyFlag& operator=(AbilitiesDirtyFlag const&) = delete;
    AbilitiesDirtyFlag(AbilitiesDirtyFlag const&)            = delete;
    AbilitiesDirtyFlag()                                     = delete;
};
