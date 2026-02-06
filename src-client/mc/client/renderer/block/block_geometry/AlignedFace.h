#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"

namespace BlockGeometry {

class AlignedFace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::std::array<::Vec3, 4>> verts;
    ::ll::TypedStorage<4, 32, ::std::array<::Vec2, 4>> uvs;
    ::ll::TypedStorage<8, 8, uint64>                   textureIndex;
    // NOLINTEND
};

} // namespace BlockGeometry
