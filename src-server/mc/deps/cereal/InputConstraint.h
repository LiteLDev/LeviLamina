#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct InputConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk15f1d6;
    // NOLINTEND

public:
    // prevent constructor by default
    InputConstraint& operator=(InputConstraint const&);
    InputConstraint(InputConstraint const&);
    InputConstraint();

};

}
