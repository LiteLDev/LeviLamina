#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ScreenInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> width;
    ::ll::TypedStorage<4, 4, uint> height;
    ::ll::TypedStorage<4, 4, uint> availableWidth;
    ::ll::TypedStorage<4, 4, uint> availableHeight;
    ::ll::TypedStorage<4, 4, uint> colorDepth;
    ::ll::TypedStorage<4, 4, uint> pixelDepth;
    // NOLINTEND
};

} // namespace OreUI
