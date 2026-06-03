#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct MinSizeConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mMinSize;
    // NOLINTEND
};

} // namespace cereal::internal
