#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Filter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTER
public:
    Filter& operator=(Filter const&) = delete;
    Filter(Filter const&)            = delete;
    Filter()                         = delete;
#endif

public:
};
