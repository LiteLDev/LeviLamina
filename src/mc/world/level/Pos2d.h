#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos2d {
public:
    int x; // this+0x0
    int z; // this+0x4

public:
    // prevent constructor by default
    Pos2d& operator=(Pos2d const&);
    Pos2d(Pos2d const&);
    Pos2d();
};
