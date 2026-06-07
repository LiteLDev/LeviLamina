#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct TileDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mID;
    ::ll::TypedStorage<4, 4, int>  mWidth;
    ::ll::TypedStorage<4, 4, int>  mHeight;
    // NOLINTEND
};

} // namespace GeometryAtlas
