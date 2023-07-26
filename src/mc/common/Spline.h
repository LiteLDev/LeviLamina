#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class Spline {

public:
    // prevent constructor by default
    Spline& operator=(Spline const&) = delete;
    Spline(Spline const&)            = delete;
    Spline()                         = delete;
};
