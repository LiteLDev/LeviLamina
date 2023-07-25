#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

class StringConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_INTERNAL_STRINGCONSTRAINT
public:
    StringConstraint& operator=(StringConstraint const&) = delete;
    StringConstraint(StringConstraint const&)            = delete;
    StringConstraint()                                   = delete;
#endif

public:
    /**
     * @symbol ??1StringConstraint\@internal\@cereal\@\@QEAA\@XZ
     */
    MCAPI ~StringConstraint();
};

}; // namespace cereal::internal
