#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0>
class DividedPos {
public:
    // prevent constructor by default
    DividedPos& operator=(DividedPos const&);
    DividedPos(DividedPos const&);
    DividedPos();
};
