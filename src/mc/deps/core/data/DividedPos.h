#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class DividedPos {

public:
    // prevent constructor by default
    DividedPos& operator=(DividedPos const&) = delete;
    DividedPos(DividedPos const&)            = delete;
    DividedPos()                             = delete;
};
