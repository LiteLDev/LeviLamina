#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3078a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext(ReflectionContext const&);
    ReflectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ReflectionContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
