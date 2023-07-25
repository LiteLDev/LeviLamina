#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct InvertableFilter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INVERTABLEFILTER
public:
    InvertableFilter& operator=(InvertableFilter const&) = delete;
    InvertableFilter(InvertableFilter const&)            = delete;
    InvertableFilter()                                   = delete;
#endif

public:
};
