#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VecXZ {
public:
    // prevent constructor by default
    VecXZ& operator=(VecXZ const&);
    VecXZ(VecXZ const&);
    VecXZ();
};
