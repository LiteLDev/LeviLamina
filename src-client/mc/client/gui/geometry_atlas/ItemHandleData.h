#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

struct ItemHandleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mHash;
    ::ll::TypedStorage<1, 1, bool>   mIsAnimated;
    // NOLINTEND
};

} // namespace GeometryAtlas
