#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct SizeConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8909ad;
    ::ll::UntypedStorage<8, 8> mUnk1c1ce5;
    // NOLINTEND

public:
    // prevent constructor by default
    SizeConstraint& operator=(SizeConstraint const&);
    SizeConstraint(SizeConstraint const&);
    SizeConstraint();
};

} // namespace cereal::internal
