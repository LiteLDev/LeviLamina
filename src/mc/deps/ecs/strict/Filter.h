#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Filter {
public:
    // prevent constructor by default
    Filter& operator=(Filter const&);
    Filter(Filter const&);
    Filter();
};
