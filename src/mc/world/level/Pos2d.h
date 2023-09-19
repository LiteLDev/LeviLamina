#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos2d {
public:
    // prevent constructor by default
    Pos2d& operator=(Pos2d const&);
    Pos2d(Pos2d const&);
    Pos2d();
};
