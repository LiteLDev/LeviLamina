#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct AtlasDimensions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> mWidth;
    ::ll::TypedStorage<2, 2, ushort> mHeight;
    // NOLINTEND
};

} // namespace GeometryAtlas
