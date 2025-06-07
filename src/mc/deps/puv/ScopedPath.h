#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

struct ScopedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk16802b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScopedPath();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
