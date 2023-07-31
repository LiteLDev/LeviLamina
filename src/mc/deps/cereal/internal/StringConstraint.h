#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

class StringConstraint {

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&) = delete;
    StringConstraint(StringConstraint const&)            = delete;
    StringConstraint()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1StringConstraint\@internal\@cereal\@\@QEAA\@XZ
     */
    MCAPI ~StringConstraint();
    // NOLINTEND
};

}; // namespace cereal::internal
