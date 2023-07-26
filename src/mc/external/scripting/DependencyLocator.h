#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {

public:
    // prevent constructor by default
    DependencyLocator& operator=(DependencyLocator const&) = delete;
    DependencyLocator(DependencyLocator const&)            = delete;
    DependencyLocator()                                    = delete;
};

}; // namespace Scripting
