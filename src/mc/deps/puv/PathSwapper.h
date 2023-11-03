#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Puv::internal {

class PathSwapper {
public:
    // prevent constructor by default
    PathSwapper& operator=(PathSwapper const&);
    PathSwapper(PathSwapper const&);
    PathSwapper();

public:
    // NOLINTBEGIN
    // symbol: ??1PathSwapper@internal@Puv@@QEAA@XZ
    MCAPI ~PathSwapper();

    // NOLINTEND
};

}; // namespace Puv::internal
