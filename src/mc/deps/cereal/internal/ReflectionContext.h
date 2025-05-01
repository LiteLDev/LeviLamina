#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ReflectionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72> mUnk3078a3;
    ::ll::UntypedStorage<8, 64> mUnk8a188a;
    // NOLINTEND

public:
    // prevent constructor by default
    ReflectionContext& operator=(ReflectionContext const&);
    ReflectionContext(ReflectionContext const&);
    ReflectionContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ReflectionContext(::cereal::internal::ReflectionContext&&);

    MCNAPI ~ReflectionContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::ReflectionContext&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
