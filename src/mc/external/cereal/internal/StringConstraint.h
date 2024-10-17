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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal::internal
