#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct ScopedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf9ce6e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScopedPath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
