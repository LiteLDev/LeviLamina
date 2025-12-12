#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct StringConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkd0ba2b;
    ::ll::UntypedStorage<8, 32> mUnkb9be2f;
    ::ll::UntypedStorage<8, 8>  mUnke2d38c;
    // NOLINTEND

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint(StringConstraint const&);
    StringConstraint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StringConstraint();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
