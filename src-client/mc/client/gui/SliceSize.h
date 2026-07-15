#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

struct SliceSize {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> left;
    ::ll::TypedStorage<4, 4, float> top;
    ::ll::TypedStorage<4, 4, float> right;
    ::ll::TypedStorage<4, 4, float> bottom;
    // NOLINTEND
};

} // namespace ui
