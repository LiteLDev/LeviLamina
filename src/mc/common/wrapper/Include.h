#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Include {

public:
    // prevent constructor by default
    Include& operator=(Include const&) = delete;
    Include(Include const&)            = delete;
    Include()                          = delete;
};
