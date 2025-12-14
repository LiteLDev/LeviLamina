#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RectangleArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> _x0;
    ::ll::TypedStorage<4, 4, float> _x1;
    ::ll::TypedStorage<4, 4, float> _y0;
    ::ll::TypedStorage<4, 4, float> _y1;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C bool isOverlapping(::RectangleArea const& rect) const;
    // NOLINTEND
};
