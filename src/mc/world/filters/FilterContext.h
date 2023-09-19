#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterContext {
public:
    // prevent constructor by default
    FilterContext& operator=(FilterContext const&);
    FilterContext(FilterContext const&);
    FilterContext();
};
