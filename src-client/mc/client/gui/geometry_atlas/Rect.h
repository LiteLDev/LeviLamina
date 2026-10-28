#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct Rect {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mWidth;
    ::ll::TypedStorage<4, 4, float> mHeight;
    // NOLINTEND
};

} // namespace GeometryAtlas
