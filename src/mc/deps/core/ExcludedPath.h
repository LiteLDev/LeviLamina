#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

struct ExcludedPath {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_EXCLUDEDPATH
public:
    ExcludedPath& operator=(ExcludedPath const&) = delete;
    ExcludedPath(ExcludedPath const&)            = delete;
    ExcludedPath()                               = delete;
#endif

public:
};

}; // namespace Core
