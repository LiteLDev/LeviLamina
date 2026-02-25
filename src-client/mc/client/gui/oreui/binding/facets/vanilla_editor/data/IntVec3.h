#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct IntVec3 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND
};

} // namespace OreUI
