#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct TextureAtlasTileUVs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> u0;
    ::ll::TypedStorage<4, 4, float> v0;
    ::ll::TypedStorage<4, 4, float> u1;
    ::ll::TypedStorage<4, 4, float> v1;
    // NOLINTEND
};

} // namespace cg
