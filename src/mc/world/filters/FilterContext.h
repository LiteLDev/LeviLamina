#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterContext {

public:
    // prevent constructor by default
    FilterContext& operator=(FilterContext const&) = delete;
    FilterContext(FilterContext const&)            = delete;
    FilterContext()                                = delete;
};
