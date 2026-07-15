#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CaretMeasureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>  position;
    ::ll::TypedStorage<1, 1, bool const> shouldRender;
    // NOLINTEND
};
