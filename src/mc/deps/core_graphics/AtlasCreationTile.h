#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct AtlasCreationTile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> width;
    ::ll::TypedStorage<4, 4, uint> height;
    ::ll::TypedStorage<1, 1, bool> isQuad;
    // NOLINTEND
};

} // namespace cg
