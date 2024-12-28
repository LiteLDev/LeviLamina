#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Pos2d {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // prevent constructor by default
    Pos2d& operator=(Pos2d const&);
    Pos2d(Pos2d const&);
    Pos2d();
};
