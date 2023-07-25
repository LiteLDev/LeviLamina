#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERCONTEXT
public:
    FilterContext& operator=(FilterContext const&) = delete;
    FilterContext(FilterContext const&)            = delete;
    FilterContext()                                = delete;
#endif

public:
};
