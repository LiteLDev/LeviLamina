#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int32_t T0>
class DividedPos {

public:
    // prevent constructor by default
    DividedPos& operator=(DividedPos const&) = delete;
    DividedPos(DividedPos const&)            = delete;
    DividedPos()                             = delete;
};
