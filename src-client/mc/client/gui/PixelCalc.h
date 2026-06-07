#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PixelCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPixelsPerMillimeter;
    ::ll::TypedStorage<4, 4, float> mMillimetersPerPixel;
    // NOLINTEND

public:
    // prevent constructor by default
    PixelCalc();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PixelCalc(float pixelsPerMillimeter);

    MCAPI float millimetersToPixels(float mm) const;

    MCAPI void setPixelsPerMillimeter(float pixelsPerMillimeter);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float pixelsPerMillimeter);
    // NOLINTEND
};
