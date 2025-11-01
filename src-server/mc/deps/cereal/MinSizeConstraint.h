#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct MinSizeConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkfe3c2d;
    // NOLINTEND

public:
    // prevent constructor by default
    MinSizeConstraint& operator=(MinSizeConstraint const&);
    MinSizeConstraint(MinSizeConstraint const&);
    MinSizeConstraint();
};

} // namespace cereal::internal
