#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Include {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INCLUDE
public:
    Include& operator=(Include const&) = delete;
    Include(Include const&)            = delete;
    Include()                          = delete;
#endif

public:
};
