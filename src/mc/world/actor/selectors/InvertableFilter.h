#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InvertableFilter {
public:
    // prevent constructor by default
    InvertableFilter& operator=(InvertableFilter const&);
    InvertableFilter(InvertableFilter const&);
    InvertableFilter();
};
