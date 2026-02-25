#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IntRectangle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> w;
    ::ll::TypedStorage<4, 4, int> h;
    // NOLINTEND
};
