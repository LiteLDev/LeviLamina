#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct Spline {
public:
    // prevent constructor by default
    Spline& operator=(Spline const&);
    Spline(Spline const&);
    Spline();
};
