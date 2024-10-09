#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

template <typename T0>
class BasicNumericConstraint {
public:
    // prevent constructor by default
    BasicNumericConstraint& operator=(BasicNumericConstraint const&);
    BasicNumericConstraint(BasicNumericConstraint const&);
    BasicNumericConstraint();
};

}; // namespace cereal
