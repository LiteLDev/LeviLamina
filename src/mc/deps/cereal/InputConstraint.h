#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct InputConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mMaxLength;
    ::ll::TypedStorage<8, 8, uint64> mMinLength;
    // NOLINTEND
};

} // namespace cereal::internal
