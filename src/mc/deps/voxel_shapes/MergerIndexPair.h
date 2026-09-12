#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

struct MergerIndexPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, schar> first;
    ::ll::TypedStorage<1, 1, schar> second;
    // NOLINTEND
};

} // namespace VoxelShapes
