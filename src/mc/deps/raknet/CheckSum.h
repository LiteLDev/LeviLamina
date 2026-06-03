#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CheckSum {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> r;
    ::ll::TypedStorage<2, 2, ushort> c1;
    ::ll::TypedStorage<2, 2, ushort> c2;
    ::ll::TypedStorage<4, 4, uint>   sum;
    // NOLINTEND
};
