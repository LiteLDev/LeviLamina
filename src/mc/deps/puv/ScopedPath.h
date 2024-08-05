#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

class ScopedPath {
public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // NOLINTBEGIN
    MCAPI ~ScopedPath();

    // NOLINTEND
};

}; // namespace Puv::internal
