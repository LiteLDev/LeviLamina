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
    // symbol: ??1ScopedPath@internal@Puv@@QEAA@XZ
    MCAPI ~ScopedPath();

    // NOLINTEND
};

}; // namespace Puv::internal
