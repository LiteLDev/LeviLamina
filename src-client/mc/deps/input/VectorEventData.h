#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VectorEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> id;
    ::ll::TypedStorage<4, 4, float> x;
    ::ll::TypedStorage<4, 4, float> y;
    ::ll::TypedStorage<4, 4, float> z;
    // NOLINTEND
};
