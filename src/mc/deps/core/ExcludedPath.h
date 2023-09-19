#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct ExcludedPath {
public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&);
    ExcludedPath(ExcludedPath const&);
    ExcludedPath();
};

}; // namespace Core
