#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

class StringConstraint {
public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint(StringConstraint const&);
    StringConstraint();

public:
    // NOLINTBEGIN
    MCAPI ~StringConstraint();

    // NOLINTEND
};

}; // namespace cereal::internal
