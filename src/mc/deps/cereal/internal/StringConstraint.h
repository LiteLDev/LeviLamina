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
    ::ll::UntypedStorage<8, 8>  mUnk78e7c3;
    // NOLINTEND

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringConstraint(::cereal::internal::StringConstraint const&);

    MCAPI ~StringConstraint();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::internal::StringConstraint const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
