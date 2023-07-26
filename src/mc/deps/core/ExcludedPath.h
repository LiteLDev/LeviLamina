#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct ExcludedPath {

public:
    // prevent constructor by default
    ExcludedPath& operator=(ExcludedPath const&) = delete;
    ExcludedPath(ExcludedPath const&)            = delete;
    ExcludedPath()                               = delete;
};

}; // namespace Core
