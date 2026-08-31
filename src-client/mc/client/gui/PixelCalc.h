#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PixelCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPixelsPerMillimeter;
    ::ll::TypedStorage<4, 4, float> mMillimetersPerPixel;
    // NOLINTEND
};
