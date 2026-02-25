#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ImageDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mWidth;
    ::ll::TypedStorage<4, 4, uint> mHeight;
    // NOLINTEND
};

} // namespace OreUI
