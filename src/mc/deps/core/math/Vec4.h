#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Vec4 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    ::ll::TypedStorage<4, 4, float> w;
    // NOLINTEND
};
