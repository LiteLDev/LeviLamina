#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class DividedPos2d {

public:
    // prevent constructor by default
    DividedPos2d& operator=(DividedPos2d const&) = delete;
    DividedPos2d(DividedPos2d const&)            = delete;
    DividedPos2d()                               = delete;
};
