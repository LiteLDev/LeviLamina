#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class DependencyLocator {
public:
    // prevent constructor by default
    DependencyLocator& operator=(DependencyLocator const&);
    DependencyLocator(DependencyLocator const&);
    DependencyLocator();
};

}; // namespace Scripting
